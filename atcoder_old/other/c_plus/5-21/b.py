n,k = map(int, input().split())
a = list(map(int,input().split()))
b =list(map(int,input().split()))
bk=[]
for i in b:
    bk.append(i - 1)
count=0
j=0

maximam = max(a)
for i in k:

#for i in a:
#    if i == maximam:
#        check = count in b
#        if check:
#            j+=1
#    count+=1
if j:
    print('Yes')
else:
    print('No')

