n = int(input())

for i in range(n):
    arr = list(map(int, input().split()))

    arr.sort()
    print(arr[7])