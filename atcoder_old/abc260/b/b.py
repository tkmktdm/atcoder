n,x,y,z = map(int,input().split())
a = list(map(int,input().split()))
b = list(map(int,input().split()))
c = [a,b]
ma = max(a);

print(c)
print([i for i, x in enumerate(a) if x == ma])
print(a);
