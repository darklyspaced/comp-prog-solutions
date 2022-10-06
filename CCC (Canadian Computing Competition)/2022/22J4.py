together = int(input())
together_l = []
count = 0
no = 0

for i in range(together):
  t_name = str(input()).split(" ")
  together_l.append(t_name)

apart = int(input())
apart_l = []

for i in range(apart):
  t_name = str(input()).split(" ")
  apart_l.append(t_name)

groups = int(input())
groups_l = []

for i in range(groups):
  t_name = str(input()).split(" ")
  groups_l.append(t_name)

t_name = ""

# converts into a tuple so that you can use set operations on it
groups_t = tuple(map(tuple, groups_l))
apart_t = tuple(map(tuple, apart_l))
together_t = tuple(map(tuple, together_l))

for i in range(apart):
    for x in range(groups):
        if set(apart_t[i]).issubset(set(groups_t[x])):
            count += 1

for i in range(together):
    for x in range(groups):
        if set(together_t[i]).issubset(set(groups_t[x])) == False:
            no += 1
    if no == groups:
        count += 1
        no = 0

print(count)
