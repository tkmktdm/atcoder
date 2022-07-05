import collections

n=int(input())
slist=[ input() for i in range(n)]
s = collections.Counter(slist)
values, count = zip(*s.most_common())
key = 0
index = 0
list = []

for i in count:
    if max(count) == i:
        list.append(values[key])
    key+=1

last = sorted(list)

for l in last:
    print(l)
import collections

n=int(input())
slist=[ input() for i in range(n)]
s = collections.Counter(slist)
values, count = zip(*s.most_common())
key = 0
index = 0
list = []

for i in count:
    if max(count) == i:
        list.append(values[key])
    key+=1

last = sorted(list)

for l in last:
    print(l)

