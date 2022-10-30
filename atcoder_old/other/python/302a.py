str=list(input())
if len(str) == 6:
    if str[2] == str[3] and str[4] == str[5]:
        result = 'YES'
    else:
        result = 'NO'
else:
    result = 'NO'


print(result)
