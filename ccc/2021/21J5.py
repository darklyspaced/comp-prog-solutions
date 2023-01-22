M = int(input())  # y
N = int(input())  # x
K = int(input())
changes = []
board = []  # 2d array with all pos
ans = 0


def flip(x, y):
  if board[x][y] == "B":
    board[x][y] = "G"
  else:
    board[x][y] = "B"


for i in range(K):
  temp = str(input())
  temp = temp.split(" ")
  changes.append(temp)

temp = []

for i in range(M):
  temp.clear()
  for j in range(N):
    temp.append("B")
    add = list(temp)  # python always copies by reference
  board.append(add)

for i in range(len(changes)):
  if changes[i][0] == "R":
    for j in range(len(board[int(changes[i][1])-1])):  # loops over one element
      flip(int(changes[i][1])-1, j)  # changes them via magic
  else:
    for j in range(len(board)):  # if column, every el needs to be changed
      flip(j, int(changes[i][1])-1)  # changes them via magic

for i in range(len(board)):
  for j in range(len(board[i])):
    if board[i][j] == "G":
    	ans = int(ans) + 1


print(ans)
