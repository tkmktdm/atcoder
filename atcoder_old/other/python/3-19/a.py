x,y = map(int,input().split())
xlist = []
ylist = []
for i in range(1, x+1):
    if x%i == 0:
        xlist += [i]
for i in reversed(range(x, y+1)):
    sum = 0
    for k in xlist:
        if i%k == 0:
            sum += 1
    if sum == 1:
        ans = i
        break
print(ans-x)
