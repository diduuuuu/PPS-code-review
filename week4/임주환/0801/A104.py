n = int(input())

dist = list(map(int, input().split()))

dist.sort()
del dist[n - 1]

sum = 0
for path in dist:
    sum += path
print(sum)