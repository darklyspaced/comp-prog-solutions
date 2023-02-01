test = int(input())
temp = test
ans = 0
while (test != -1):
    test = int(input())
    if test >= temp:
        ans += 1
print(ans)
