test = str(input())
test = test.split(" ")
for i in test:
    for x in range(len(i)):
        if x[i] == "A":
            x[i]= "E"
        elif x[i]== "E":
            x[i]= "I"
        elif x[i] == "I":
            x[i] = "O"
        elif x[i] == "O":
            x[i] = "U"
        elif x[i]== "U":
            x[i]= "A"
print("".join(test))
