n = int(input());
s = input();
count = 0;
check = 1;

while True:
    a = s.find("ARC");
    if a==-1:
        break;
    if check%2==1:
        s = s.replace(s[a:a+3], "R", 1);
        count+=1
        check+=1
    elif check%2==0:
        a = s.find("ARC");
        s = s.replace(s[a:a+3], "AC", 1);
        count+=1
        check+=1
print(count)
