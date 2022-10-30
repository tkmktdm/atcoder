n = int(input())
a = list(map(int, input().split()))
result = list(set(a))
A = sorted(result)
all = len(A)
output = 0
if A[0] > 0 or len(result) == 1:
    print(0)
    output+=1
else:
    for i in range(0, all-1):
        if A[i]+1 != A[i+1]:
            print(i+1)
            output+=1
            break
if output == 0:
    print(A[-1]+1)
