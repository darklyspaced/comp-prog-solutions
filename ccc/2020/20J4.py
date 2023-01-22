txt = str(input())
s = str(input())
shifts = []
s = list(s)
og = s[:]

c=0
def shift(s):
    global c
    sc = s[:] #copy by value
    if(s == og and c > 1):
        return
    for i in range(1, len(s), 1):
        s[i] = sc[i-1]
    s[0] = sc[-1]
    shifts.append("".join(s))
    c += 1
    shift(s)
shift(s)
def ans():
    for i in shifts:
        if i in txt:
            print("yes")
            return
    print("no")
ans()

