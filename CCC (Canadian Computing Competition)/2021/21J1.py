boil = int(input())
pressure = 5 * boil - 400
print(pressure)
if (pressure == 100):
    print("0")
elif (pressure > 100):
    print("-1")
else:
    print("1")
