drops = int(input())
coords=[]
tcoords=[]
sx = 101
sy = 101
lx = 0
ly = 0

for i in range(drops):
  tcoords.append(input())
for i in range(len(tcoords)):
  coords.append(tcoords[i].split(','))
for i in range(len(coords)):
  coords[i][0] = coords[i][0]
for i in range(len(coords)):
  if int(coords[i][0]) < sx:
    sx = int(coords[i][0])
  if int(coords[i][0]) > lx:
    lx = int(coords[i][0])
  if int(coords[i][1]) < sy:
    sy = int(coords[i][1])
  if int(coords[i][1]) > ly:
    ly = int(coords[i][1])
print(str(str((int(sx) - 1)) +  ',' + str(int(sy) - 1)))
print(str(str((int(lx) + 1)) +  ',' + str(int(ly) + 1)))