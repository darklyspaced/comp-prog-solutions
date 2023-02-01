num = int(input())
start = int(input())
alt = []
up = 0
down = 0
for i in range(num):
    alt.append(int(input()))

for i in range(1, len(alt)):
    if (alt[i] > alt[i-1]):
        up += alt[i] - alt[i-1]
    else:
        down += alt[i-1] - alt[i]
if start < alt[0]:
    up += alt[0] - start
else:
    down += start - alt[0]
print(up)
print(down)
