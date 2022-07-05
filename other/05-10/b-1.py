a,b,c,k = map(int,input().split())
s=0
for i in range(1,k):

    if i <= a:
        s+=1
    if a<i and i<=a+b:
        s+=0
    if a+b < i:
        s-=1
print('emd',s)
