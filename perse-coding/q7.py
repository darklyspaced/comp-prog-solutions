start = int(input())


def test():
    if start % 5 == 0:
        print(str(int(start / 5)) + "x5")
    elif (start % 4 == 0):
        print(str(int(start / 4)) + "x4")
    elif (start % 3 == 0):
        print(str(int(start / 3)) + "x3")


test()
