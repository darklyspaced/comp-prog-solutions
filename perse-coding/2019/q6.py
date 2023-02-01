lemons = int(input())
sugar = int(input())
if (lemons < 20 and sugar < 3):
    print("D")
elif (lemons < 20):
    print("B")
elif sugar < 3:
    print("C")
else:
    print("A")
