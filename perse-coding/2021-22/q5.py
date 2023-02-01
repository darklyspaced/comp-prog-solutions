items = []
ans = 0
for i in range(3):
    items.append(int(input()))

if items[0] > 0:
    ans += 1
if items[1] > 0:
    ans += 1
if ans < 2:
    if items[2] > 1:
        ans += 2
    elif items[2] > 0:
        ans += 1
if ans > 2:
    print("toasty")
else:
    print("cold")
print(sum(items) - ans)
