n = int(input())
h = list(map(int, input().split()))
m = max(h)
for i in range(0,n):
    if m == h[i]:
        print(i+1)

