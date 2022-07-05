k=int(input())
s=input()
lng=len(s)
x=s[:k]
if k >= lng:
    print(s)
else:
    print(x+'...')

