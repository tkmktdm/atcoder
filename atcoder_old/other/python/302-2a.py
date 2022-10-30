n = int(input())
s = list(input())
t = 'Takahashi'
a = 'Aoki'

for i in range(n):
    if s[i] == '1':
        if (i+1)%2 == 1:
            print(t)
            break
        else:
            print(a)
            break


