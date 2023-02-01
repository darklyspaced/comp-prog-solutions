test = []
for i in range(4):
    test.append(int(input()))
start = test[1] - test[0]


def what():
    for i in range(2, len(test)):
        if test[i] - test[i-1] == start:
            continue
        else:
            print("NO")
            return
    print(start)


what()
