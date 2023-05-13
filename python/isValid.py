#!/usr/bin/python3

def isValidChessBoard(board):
    #Check the count of kings for for both black anf white

    black_kings = 0
    white_kings = 0

    #count of pieces for both black and white
    black_pieces = 0
    white_pieces = 0

    #count of pawns for both black and white
    black_pawns = 0
    white_pawns = 0

    #Valid spaces on the chess board
    valid_spaces = set('abcdefgh12345678')

    for position, piece in board.items():
        if position[0] not in valid_spaces or position[1] not in valid_spaces:
            return False
        #check if the piece name is valid
        if not piece[0] in ['b', 'w']:
            return False

        #Count the number if black and white Kings
        if piece == 'bking':
            black_kings += 1
        elif piece == 'wking':
            white_kings += 1

        #Count the number of black and white pieces
        if piece[0] == 'b':
            black_pieces += 1
        elif piece[0] == 'w':
            white_pieces += 1

        #Count the number of black and white pawns
        if piece == 'bpawn':
            black_pawns += 1
        elif piece == 'wpawn':
            white_pawns += 1

    #Check if the count of kings is valid
    if black_kings != 1 or white_kings != 1:
        return False

    #check if the count of pieces and pawns is valid
    if black_pieces > 16 or white_pieces > 16 or black_pawns > 8 or white_pawns > 8:
        return False

    #if all conditionns  pass , the board is valid
    return True


board = {'1h': 'bking', '6c': 'wqueen', '2g': 'bbishop', '5h': 'bqueen', '3e': 'wking'}
print(isValidChessBoard(board))

