n=int(input())
m = n*2

# mを４以下の数で割った時に一番値が小さくなる組み合わせを出力
ans = []
for i in range(n):
    #if((n-i)<=4 and i<=4):
        #print(n-i)
    z = str(i)
        if int(z[-1]) < 5:
            ans.append([(n-i), i, (n/i)])
    #print(i)
print(ans)
x = (n/4)


print(m)
print(x)

