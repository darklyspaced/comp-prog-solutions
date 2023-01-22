ln = int(input())
code=[]
split=[]

for i in range(ln):
  code.append(str(input()))

for i in range(len(code)):
  split.append(code[i].split())

for i in range(len(split)):
  print(int(split[i][0])*split[i][1])