what = "wibble wobble wibble wobble jelly on the plate"
tl = what.split(" ")
test = str(input())
num = int(input())
pos = tl.index(test)
ans = []
for i in range(pos+1, pos+1+num, 1):
    ans.append(tl[i])
print(" ".join(ans))
