max = 0
for i in range(5):
    scores = list(map(int, input().split()))

    sum = 0
    for score in scores:
        sum += score
    
    if sum > max:
        max = sum
        index = i + 1

print(index, max)