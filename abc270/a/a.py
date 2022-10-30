a, b = map(int, input().split())
numList = [4,2,1]
al=[]
bl=[]
alllist=[]
for i in numList:
    if a-i >= 0:
        a=a-i
        al.append(i)
        alllist.append(i)
    if b-i >= 0:
        b=b-i
        bl.append(i)
        alllist.append(i)
alllist = set(alllist)
n = 0
for i in alllist:
    n+=i
print(n)

