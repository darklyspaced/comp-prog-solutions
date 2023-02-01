test = str(input())
for i in range(1, len(test)):
    if int(test[i]) <= int(test[i-1]):
        print(test[i])
