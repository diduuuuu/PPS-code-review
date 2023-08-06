import sys
from collections import deque

n = int(sys.stdin.readline())

Q = deque()
Q_len = 0
for i in range(n):
    oper = list(sys.stdin.readline().split())

    if oper[0] == "push":
        Q.append(int(oper[1]))
        Q_len += 1
    elif oper[0] == "pop":
        try:
            print(Q[0])
            Q.popleft()
            Q_len -= 1
        except:
            print(-1)
    elif oper[0] == "size":
        print(Q_len)
    elif oper[0] == "empty":
        if Q_len == 0:
            print(1)
        else:
            print(0)
    elif oper[0] == "front":
        try:
            print(Q[0])
        except:
            print(-1)
    else:
        try:
            print(Q[Q_len - 1])
        except:
            print(-1)