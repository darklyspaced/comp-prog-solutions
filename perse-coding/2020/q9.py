oven = int(input())
guests = int(input())
og = oven / 2
for i in range(guests):
    if oven > og:
        oven -= 2
    else:
        oven -= 1
print(oven)
