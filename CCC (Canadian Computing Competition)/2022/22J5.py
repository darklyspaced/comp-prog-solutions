
sq = int(input())  # length of one side of yard
t = int(input())  # amount of trees
tls = []  # array with locs of all trees in str
tl = []  # array with locs in int
tlr = []  # aray with locs in x,y instead of y,x
posx = 0  # legibility
posy = 1
tree = 0
no = False

for i in range(t):  # adds all the tree locations to tl
    temp = str(input())
    temp = temp.split(" ")
    tls.append(temp)

for i in range(len(tls)):  # converts all strings to numbers
    temp = []
    for j in range(len(tls[i])):
        temp.append(int(tls[i][j]))
    tl.append(temp)


def treeInSq(size):  # checks if tree is in square
    top, bottom, flawless = [], [], 0  # def req vars

    for i in range((sq-size)+1):  # loops over the y axis
        for j in range((sq-size)+1):  # loops over the x axis
            top = [j, i]  # pos of box
            bottom = [(size+j)-1, size+i-1]  # pos of box
            for x in range(len(tl)):
                # is tree in box?; inversed because it does y, x instead of x, y like a normal person
                if ((tl[x][posx] >= (top[posy])+1 and tl[x][posx] <= (bottom[posy])+1) and (tl[x][posy] >= (top[posx])+1 and tl[x][posy] <= (bottom[posx])+1)):
                    break  # give up on this config
                else:
                    flawless += 1  # this tree not in box
            if (flawless == len(tl)):  # last iteration and no trees found in box
                return True  # box found!
            else:
                flawless = 0


for i in range(sq, 1, -1):
    if treeInSq(i) == True:
        print(i)
        break
