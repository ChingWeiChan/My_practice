###################################################################
# 無法偵測輸入錯誤及返回，並回到原本的回圈(i--)
# 無法判斷該位置是否已下棋
###################################################################
theboard={'top-L':'', 'top-m':'', 'top-R':'', 'mid-L':'', 'mid-m':'', 'mid-R':'', 'low-L':'', 'low-m':'', 'low-R':''}

def printBoard(board):
    print(board['top-L']+'  | '+board['top-m']+'  | '+board['top-R'])
    print('- + - + -')
    print(board['mid-L']+'  | '+board['mid-L']+'  | '+board['mid-R'])
    print('- + - + -')
    print(board['low-L']+'  | '+board['low-m']+'  | '+board['low-R'])

turn='X'
def getmove(move):
    global theboard,turn
    try:
        #  if move in theboard == True:
             theboard[move] = turn
        #  else:
             print('Input the true word!')
    except KeyError:
               print('Why?')
    if turn =='X':
        turn='O'
    else:
        turn='X'


for i in range(1,10):
     print('Turn for '+turn+'. Move on which space?'+'(This is '+str(i)+' step)')
     getmove(input())
     printBoard(theboard)

