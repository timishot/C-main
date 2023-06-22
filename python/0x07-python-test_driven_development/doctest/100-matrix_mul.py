#!/usr/bin/python3


def matrix_mul(m_a, m_b):
    if not isinstance(m_a, list) or not isinstance(m_b, list):
        raise TypeError("ma_ must be a list or m_b must be a list")

    if not all(isinstance(row, list) for row in m_a) or not all(isinstance(row, list) for row in m_b):
        raise TypeError("m_a must be a list of lists ir m_b must be a list of lists")

    if m_a == [] or m_b == []:
        raise ValueError("m_a can't be empty or m_b can't be empty")

    if not all(isinstance(elem, (int, float)) for row in m_a for elem in row) or not all(isinstance(elem, (int, float)) for row in m_b for elem in  row):
        raise TypeError("m_a should contain only integers or floats or m_b should contain on;y integers or floats")

    if not all(len(row) == len(m_a[0])  for row in m_a) or not all(len(row) == len(m_b[0]) for row in m_b):
        raise TypeError("each row of m_a must be of the same size or each row of m_b must be the same size")

    if len(m_a[0]) != len(m_b):
        raise ValueError("m_a and m_b can't be multiplied")
    result = [[0 for j in range(len(m_b[0]))] for i in range(len(m_a))]
    for i in range(len(m_a)):
        for j in range(len(m_b[0])):
            for k in range (len(m_a)):
                result[i][j] +=  m_a[i][k] * m_b[k][j]


