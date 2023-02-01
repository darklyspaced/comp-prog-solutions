x = int(input())
y = int(input())
z = int(input())

sid = (z * y) / 2
jen = x * z

if jen > sid:
    print("Jen")
    print(jen - sid)
else:
    print("Sid")
    print(sid - jen)
