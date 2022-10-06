n=str(input())
direction=[]
steps=[]
while (n!="99999"):
  d=int(n[0])+int(n[1])
  if d%2==0 and d!=0:
    d="right"
    lastd="right"
  elif d%2!=0 and d!=0:
    d="left"
    lastd="left"
  else:
    d=lastd
  s=n[-3]+n[-2]+n[-1]
  direction.append(d)
  steps.append(s)
  n=str(input())
for i in range(len(direction)):
  print(direction[i], steps[i])
  