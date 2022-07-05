i = int(input())
if i<60:
    if i<10:
        print('21:0{:d}'.format(i))
    else:
        print('21:{:d}'.format(i))
else:
    i = i-60
    if i < 10:
        print('22:0{:d}'.format(i))
    else:
        print('22:{:d}'.format(i))
