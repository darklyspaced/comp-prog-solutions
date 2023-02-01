test = str(input())
if test == "electric":
    print("$0")
elif test == "hybrid":
    num = float(input())
    if num > 1.8:
        print("$140")
    else:
        print("$120")
elif test == "petrol":
    num = float(input())
    if num > 1.8:
        print("$170")
    else:
        print("$150")
elif test == "diesel":
    num = float(input())
    if num > 1.8:
        print("$200")
    else:
        print("$180")
