x, y, z = map(int, input().split())

if (y < 0 or x<y) and 0 < x:
    print(x)
elif x < 0 and (0 < y or y<x):
    print(abs(x))
elif 0 < y and y <= x:
    if y > z and z > 0:
        print(x)
    elif y > z and z < 0:
        print(x+abs(z)+abs(z))
    else:
        print(-1)
elif 0 > y and x<=y:
    if y < z and z < 0:
        print(abs(x))
    elif y < z and z > 0:
        print(abs(x)+abs(z)+abs(z))
    else:
        print(-1)
else:
    print(-1)
