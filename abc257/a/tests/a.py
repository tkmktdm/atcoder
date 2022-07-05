import math
import string

n,x = map(int, input().split())
ans = math.ceil(x/n)
word = list(string.ascii_uppercase)
print(word[ans-1])
