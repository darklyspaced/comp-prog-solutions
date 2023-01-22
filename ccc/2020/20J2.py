cutoff = int(input())
infected = int(input())
r = int(input())
days = 0
count = infected

while infected <= cutoff:
  days = days + 1
  count = (count * r)
  infected = infected + count

print(days)