no = int(input())
pos=[]
sx, sy, lx, ly = 1000, 1000, 0, 0
for i in range(no):
    pos.append(input().split(","))
for i in pos:
    if int(i[0])-1 < sx:
        sx = int(i[0])-+ 1
    if int(i[1])-1 < sy:
        sy = int(i[1]) - 1
    if int(i[0])+1 > lx:
        lx = int(i[0]) + 1
    if int(i[1])+1 > ly:
        ly = int(i[1]) + 1
print(str(sx) + "," + str(sy))
print(str(lx) + "," + str(ly))

  