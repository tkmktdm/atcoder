def f(k):
    if k==0:
        return 1
    else:
        return f(k//2)+f(k//3)
    return ans

n = int(input())

ans = f(n)
print(ans)
