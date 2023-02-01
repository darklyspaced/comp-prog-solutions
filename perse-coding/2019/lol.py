test = []
ans = [1] * 5
for i in range(5):
    test.append(str(input()))
for i in test:
    ans[int(i[0]) - 1] = i[1]
print(int("".join(ans)))
