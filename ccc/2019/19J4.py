number=[1,2,3,4]
method=str(input())
for i in range(len(method)):
  if method[i]=="H":
    number[0], number[2] = number[2], number[0]
    number[1], number[3] = number[3], number[1]
  else:
    number[0], number[1] = number[1], number[0]
    number[2], number[3] = number[3], number[2]

print(str(number[0]), str(number[1]))
print(str(number[2]), str(number[3]))