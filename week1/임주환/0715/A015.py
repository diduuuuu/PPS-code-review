nums = list(map(int, input().split()))

sum = 0

for num in nums:
    num *= num
    sum += num

print(sum % 10)
