cards = str(input())
ans = 0

for i in range(1, len(cards)):
    print(i-1)
    if cards[i] == cards[i-1]:
        ans += 1
        cards = cards[:i]
print(ans)
