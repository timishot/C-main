#!/usr/bin/python3

theBoard = {'1': ' ', '2': ' ', '3': ' ', '4': ' ', '5':
' ', '6': ' ', '7': ' ', '8': ' ', '9': ' '}

def printBoard(board):
    print(board['1'] + '|' + board['2'] + '|' + board['3'])
    print('-+-+-')
    print(board['4'] + '|' + board['5'] + '|' + board['6'])
    print('-+-+-')
    print(board['7'] + '|' + board['8'] + '|' + board['9'])

turn = 'X'

for i in range (9):
    printBoard(theBoard)
    print('Turn for ' + turn  + '.Moove on the space?')
    while True:

        move = input()
        if move in theBoard and theBoard[move] == ' ':
            break
        else:
            print('Invalid move. Try again.')
    theBoard[move] = turn
    if turn == 'X':
        turn = 'O'
    else:
        turn = 'X'
printBoard(theBoard)


