ln = int(input())
winner = ""
hb = 0

for x in range(ln):
  name = str(input())
  bet = int(input())
  if bet > hb:
    hb = bet
    winner = name
print(winner)
