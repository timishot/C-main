#!/usr/bin/python3

def matrix_divided(matrix, div):
    if not isinstance(matrix, list) and not all(isinstance(row, list) for row in matrix):
        raise TypeError("matrix must be a matrix (list of lists) of integers/floats")

    #Check if each row of the matrix has the same size
    if not all(len(row) == len(matrix[0]) for row in matrix):
        raise TypeError("Each row of the matrix must have the same size")

    if not isinstance(div, (int, float)):
        raise TypeError("div must be a number")

    if div == 0:
        raise ZeroDivisionError("division by zero")

    #Check if all elements in the matic are integers or floats
    if not all(isinstance(elem, (int, float)) for row in matrix for elem in row):
        raise TypeError("matrix must contain only integers or floats")

    new_matrix = [[round(elem / div, 2) for elem in row] for row in matrix]

    return new_matrix


