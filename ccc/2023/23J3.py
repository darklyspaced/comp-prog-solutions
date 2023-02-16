num = int(input())
arr = []
ans = [[0, 0]]
test = []
attend = [0] * 5
for i in range(num):
    arr.append(str(input()))
for i in arr:
    for pos, j in enumerate(i):
        if j == "Y":
            attend[pos] += 1
for pos, i in enumerate(attend):
    if i > ans[0][0]:
        ans.clear()
        ans.append([i, pos+1])
    elif i == ans[0][0]:
        ans.append([i, pos+1])
for i in ans:
    test.append(str(i[1]))
print(",".join(test))
