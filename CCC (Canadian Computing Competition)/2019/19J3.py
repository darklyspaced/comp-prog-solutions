ln = int(input())
lc = ""
s = []
output = []
ct = 0
for i in range(ln):
    s.append(str(input()))
    
for e in range(len(s)):
    for c in range(len((s)[e])):
        cc = s[e][c] # current character
        if c == 0: # if first c then don't ask for index out of range
            lc = s[e][0]
        else:
            lc = s[e][c-1]
        if (lc == cc):
            ct += 1
            if ((c+1 >= len((s)[e])) or (cc != s[e][c+1])): #if next one is diff or last char
                temp = (str(ct) + " " + str(lc))
                output.append(temp)
                ct = 0
        elif (c+1 == len((s)[e])): # last char is not like previous 
            temp = (str(1) + " " + str(cc)) # add on last char to encoding 
            output.append(temp)
        else:
            ct += 1
            if ((cc != s[e][c+1]) or (c+1 == len((s)[e]))): #if next one is diff or last char
                temp = (str(ct) + " " + str(cc))
                output.append(temp)
                ct = 0
    print(" ".join(output))
    output.clear()