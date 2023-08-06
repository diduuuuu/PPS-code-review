N = int(input())

point = []

for i in range(N):
    tmp = list(map(int, input().split()))

    point.append(tmp)

point.sort()

for i in range(N):
    print(point[i][0], point[i][1])
