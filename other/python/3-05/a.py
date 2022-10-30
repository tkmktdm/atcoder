a,b,c,x = map(int,input().split())
if (1<=x and x<=1000):
    if (1<=a and a<=b and b<=1000):
            if (1<=c and c <= b-a):
                if (1<=x and x<=a):
                    print('{:.012f}'.format(1))
                elif (x<=b):
                    s = c/(b-a)
                    print('{:.012f}'.format(s))
                else:
                    print('{:.012f}'.format(0))

