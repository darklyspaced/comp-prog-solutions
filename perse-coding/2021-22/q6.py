a = str(input())
b = str(input())

if (a == "paper"):
    if (b == "scissors"):
        print("0-5")
    elif(b == "rock"):
        print("5-0")
    else:
        c = int(input())
        d = int(input())
        print(str(1 + c) + "-" + str(1 + d))
elif (a == "scissors"):
    if (b == "rock"):
        print("0-5")
    elif (b == "paper"):
        print("5-0")
    else:
        c = int(input())
        d = int(input())
        print(str(1 + c) + "-" + str(1 + d))
elif (a == "rock"):
    if (b == "paper"):
        print("0-5")
    elif (b == "scissors"):
        print("5-0")
    else:
        c = int(input())
        d = int(input())
        print(str(1 + c) + "-" + str(1 + d))
