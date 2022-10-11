y = int(input())
x = int(input())
grid = []
t = [1, 1]
cache = []
skip = False
for i in range(y):
    grid.append(input().split(" "))

def find(z): #find all occurences of z in grid
    return [[posx+1, posy+1] for posy, y in enumerate(grid) for posx, x in enumerate(y) if x == str(z)]

def solve(x):
    global skip
    s = x[0] * x[1] #no. we are searching for as a * b = x
    if s not in cache and skip != True:
        cache.append(s)
        if x == [1, 1]:
            skip = True
            print("yes")
        for i in find(s):
            solve(i)
    if cache == x * y:
        skip == True
solve([x, y])

if skip == False:  # no match was found
    print("no")

