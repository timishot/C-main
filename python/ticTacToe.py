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

    if (theBoard['1'] == theBoard['2'] == theBoard['3'] == 'X' or
        theBoard['4'] == theBoard['5'] == theBoard['6'] == 'X' or
        theBoard['7'] == theBoard['8'] == theBoard['9'] == 'X' or
        theBoard['1'] == theBoard['4'] == theBoard['7'] == 'X' or
        theBoard['2'] == theBoard['5'] == theBoard['8'] == 'X' or
        theBoard['3'] == theBoard['6'] == theBoard['9'] == 'X' or
        theBoard['1'] == theBoard['5'] == theBoard['9'] == 'X' or
        theBoard['3'] == theBoard['5'] == theBoard['7'] == 'X'):
        print("Congratulations! Player X wins!")
        break

    if (theBoard['1'] == theBoard['2'] == theBoard['3'] == 'O' or
        theBoard['4'] == theBoard['5'] == theBoard['6'] == 'O' or
        theBoard['7'] == theBoard['8'] == theBoard['9'] == 'O' or
        theBoard['1'] == theBoard['4'] == theBoard['7'] == 'O' or
        theBoard['2'] == theBoard['5'] == theBoard['8'] == 'O' or
        theBoard['3'] == theBoard['5'] == theBoard['7'] == 'O'):
        print("Congratulations! Player O wins!")
        break

printBoard(theBoard)


