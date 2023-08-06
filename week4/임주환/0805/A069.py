import sys
from collections import deque

n, k = sys.stdin.readline().split()
n = int(n)
k = int(k)

Q = deque()
result = []

for i in range(n):
    Q.append(i + 1)

i = k - 1
while True:
    result.append(Q[i])
    del Q[i]
    if len(Q) > 0:
        i = (i + k - 1) % len(Q)
    else:
        break

print("<", end="")
for c in result:
    print(c, end="")
    if c != result[len(result) - 1]:
        print(", ", end="")
print(">", end="\n")