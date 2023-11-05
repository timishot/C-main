print([[0 for _ in range(-1)] for _ in range(-1)])

for i, j in zip(range(0, 5, 1), range(0, -5, -1)):
	print(f'{i}, {j}')