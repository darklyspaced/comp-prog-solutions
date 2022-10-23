coords=[]
for i in range(2):
   coords.append(int(input()))
if (coords[0] > 0):
    print((1 if coords[1] > 0 else 4))
if (coords[0] < 0):
    print((2 if coords[1] > 0 else 3))
                  