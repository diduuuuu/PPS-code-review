nums = [0] * 10
for i in range(10):
    nums[i] = int(input())

remainder = []
for num in nums:
    tmp = num % 42

    remainder.append(tmp)

remainder.sort()

count = 1
for i in range(1, len(remainder)):
    if remainder[i - 1] != remainder[i]:
        count += 1

print(count)