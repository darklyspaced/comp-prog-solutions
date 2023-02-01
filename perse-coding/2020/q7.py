nums = []
for i in range(3):
    nums.append(int(input()))
for i in nums:
    if i < 51:
        if i % 2 == 0:
            print("north")
        else:
            print("south")
    if i > 50:
        if i % 2 == 0:
            print("east")
        else:
            print("west")
