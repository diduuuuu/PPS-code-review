import sys
from collections import deque

n = int(sys.stdin.readline())

card = deque()
for i in range(n):
    card.append(i + 1)


delete = True
while True:
    if len(card) == 1:
        break

    if delete == True:
        del card[0]
        delete = False
    else:
        card.append(card[0])
        del card[0]
        delete = True

print(card[0])