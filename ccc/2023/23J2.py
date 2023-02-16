num = int(input())
ans = []
out = 0
dicti = {
  "Poblano": 1500,
  "Mirasol": 6000,
  "Serrano": 15500,
  "Cayenne": 40000,
  "Thai": 75000,
  "Habanero": 125000
}
for i in range(num):
    ans.append(str(input()))
for i in ans:
    out += dicti[i]
print(out)
