import sys

s = sys.stdin.readline()

tail = []
for i in range(len(s)):
    tmp = s[i:len(s) - 1]
    tmp = ''.join(tmp)
    tail.append(tmp)

tail.sort()

for i in range(1, len(tail)):
    print(tail[i])