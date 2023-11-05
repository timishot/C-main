def solve_n_queens(n):
	def is_safe(board, row, col):
		# Check the row on the left side
		for i in range(col):
			if board[row][i] == 1:
				return False
		
		#check the upper diagonal on the lift side
		for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
			if board[i][j] == 1:
				return False
		#check lowre diagonal on the left side
		for i, j in zip(range(row, n, 1), range(col, -1, -1)):
			if board[i][j] ==1:
				return False
			

		return True
	def solve(board, col):
		if col >= n:
			return True
		for i in range(n):
			if is_safe(board, i, col):
				board[i][col] = 1
				if solve(board, col + 1):
					return True
				board[i][col] = 0 #backtrack

		return False
	board = [[0 for _ in range(n)] for _ in range(n)]

	if not solve(board, 0):
		print("No solution exists")
		return
	
	for row in board:
		print(" ".join(["Q" if cell == 1 else "." for cell in row]))

#example usage

solve_n_queens(4)