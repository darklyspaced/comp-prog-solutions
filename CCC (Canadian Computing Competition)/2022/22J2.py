players = int(input())
t = 0

goals_ = []
fouls_ = []

for i in range(players):
    goals_.append(int(input()))
    fouls_.append(int(input()))

for i in range(players):
  score = (goals_[i]*5)-(fouls_[i]*3)
  if (score > 40):
    t += 1

if t == players:
  print(str(t) + "+")
else:
  print(str(t))
