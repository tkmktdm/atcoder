n = int(input())
s = input()
print("Yes" if (s[0] == "B" or s[-1] == "A") and s != "BA" else "No")

'''
n=int(input())
s=list(input())
ans = "No"

if s[0]!="A" or s[-1]!="B" and s!="BA":
    ans = "Yes"
print(ans)
'''
