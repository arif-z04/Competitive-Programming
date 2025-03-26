def can_equalize_bags(test_cases):
    results = []
    for case in test_cases:
        n, a = case
        freq = {}
        for num in a:
            freq[num] = freq.get(num, 0) + 1
        possible = True
        for num in sorted(freq):
            count = freq[num]
            if num - 1 in freq:
                freq[num - 1] -= count
                if freq[num - 1] < 0:
                    possible = False
                    break
            else:
                possible = False
                break
        results.append("Yes" if possible else "No")
    return results

# Example usage:
test_cases = [
    (2, [1, 1]),
    (2, [2, 1]),
    (4, [1, 1, 4, 4]),
    (4, [3, 4, 3, 3]),
    (4, [2, 3, 4, 4]),
    (6, [3, 3, 4, 5, 3, 3]),
    (6, [2, 2, 2, 4, 4, 4]),
    (8, [1, 1, 1, 1, 1, 1, 1, 4]),
    (10, [9, 9, 9, 10, 10, 10, 10, 10, 10, 10])
]

print(can_equalize_bags(test_cases))