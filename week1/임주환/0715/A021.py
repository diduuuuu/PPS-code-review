n = int(input())

plug = 0
for i in range(n):
    plug += int(input())

plug -= (n - 1)

print(plug)