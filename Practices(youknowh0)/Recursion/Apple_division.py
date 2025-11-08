def divide(index, group1_sum, weights, total_sum, path, depth=0):
    indent = "  " * depth
    group2_sum = total_sum - group1_sum
    diff = abs(group1_sum - group2_sum)
    
    # Print current recursive state
    print(f"{indent}Index {index}: Group1 = {group1_sum}, Group2 = {group2_sum}, Diff = {diff}, Path: {path}")
    
    # Base case
    if index == len(weights):
        return

    # Option 1: Include current weight in group1
    divide(index + 1, group1_sum + weights[index], weights, total_sum, path + [weights[index]], depth + 1)
    
    # Option 2: Exclude current weight (goes to group2)
    divide(index + 1, group1_sum, weights, total_sum, path, depth + 1)

# Example input
weights = [3, 2, 7, 4, 1]
total_sum = sum(weights)

print("Recursive Call Tree:\n")
divide(0, 0, weights, total_sum, [])
