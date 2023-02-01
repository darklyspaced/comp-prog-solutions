import math
test = int(input())
ans = 0
while test != -1:
    ans += test
    test = int(input())
print(math.floor(ans / 60) * 30)
