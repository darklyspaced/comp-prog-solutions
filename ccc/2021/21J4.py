s=input()
s=list(s)
l=0
m=0
swaps=0
correct=0
for i in range(len(s)):
  if i>0:
    if s[i-1]<s[i]:
      for j in range(len(s)-(i+1)):
        if s[j+(i+1)]==s[i-1]:
          s[i], s[j+(i+1)] = s[j+(i+1)], s[i]
          swaps+=1
        elif s[i]>s[j+(i+1)]:
          s[i], s[j+(i+1)] = s[j+(i+1)], s[i]
          swaps+=1
  else:
    pass

print(swaps)