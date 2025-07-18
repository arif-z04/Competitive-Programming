from graphviz import Digraph

dot = Digraph()
counter = 0

def hanoi(n, start, end, aux, parent=None):
    global counter
    counter += 1
    node_id = f"n{counter}"
    label = f"hanoi({n}, {start}, {end})"
    dot.node(node_id, label)

    if parent:
        dot.edge(parent, node_id)

    if n == 1:
        move_id = f"m{counter}"
        dot.node(move_id, f"Move disk 1 from {start} to {end}", shape='box')
        dot.edge(node_id, move_id)
        return

    hanoi(n - 1, start, aux, end, node_id)
    move_id = f"m{counter}"
    dot.node(move_id, f"Move disk {n} from {start} to {end}", shape='box')
    dot.edge(node_id, move_id)
    hanoi(n - 1, aux, end, start, node_id)


def main():
    n = int(input("Enter number of disks: "))
    hanoi(n, 1, 3, 2)
    dot.render('hanoi_tree', format='png', cleanup=True)
    print("Call tree saved as hanoi_tree.png")

if __name__ == "__main__":
    main()
