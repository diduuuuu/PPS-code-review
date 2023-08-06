n = int(input())

arr = list(map(int, input().split()))

arr.sort()
i = 1
while True:
    if arr[i - 1] == arr[i]:
        del arr[i]
    else:
        i += 1
    
    if i >= len(arr):
        break

for i in arr:
    print(i, end=" ")
print()