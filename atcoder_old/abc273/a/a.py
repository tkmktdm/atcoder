def f(n):
    if (n-1) ==0:
        return 1
    return n*f(n-1)
    
n=int(input())
if n == 0:
    fn = 1
else:
    fn = f(n)

print(fn)
