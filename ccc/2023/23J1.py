p = int(input())
c = int(input())
ans = 0

if p > c:
    ans += 500
ans += p * 50
ans -= c * 10
print(ans)
