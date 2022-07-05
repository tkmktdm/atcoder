x,y = map(int,input().split())
xlist = []
ylist = []
for i in range(1, x+1):
    if x%i == 0:
        xlist += [i]
for i in reversed(range(x+1, y+1)):
    ylist += [i]

def s(n, i):
    return n/i

for i in xlist[1:-1]:
    print(map(s, ylist, i))

print(xlist)
print(ylist)
