a,b,c,k = map(int,input().split())
s=0
sss=a+b+c
ss=a+b
for i in range(1,k+1):
    if i <= sss-b-c:
        s+=1
    elif i<=a+b:
        s+=0
    else:
        s-=1
print(s)
