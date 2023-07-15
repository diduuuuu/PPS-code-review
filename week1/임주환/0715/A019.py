a = int(input())
b = int(input())
c = int(input())

multi = a * b * c

result = [0] * 10

for i in str(multi):
    result[int(i)] += 1

for i in range(10):
    print(result[i])