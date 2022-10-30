a,b,c,k = map(int,input().split())
s=0
sss=a+b+c
ss=a+b
for i in range(1,k+1):
    if i <= sss-b-c:
        s+=a
        break
    elif i<=a+b:
        s+=0
        break
    else:
        s=c*-1
        break

print(s)
