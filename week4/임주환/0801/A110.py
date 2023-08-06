n = int(input())

change = 1000 - n
answer = 0

while change > 0:
    if change >= 500:
        answer += 1
        change -= 500
    elif change >= 100:
        answer += 1
        change -= 100
    elif change >= 50:
        answer += 1
        change -= 50
    elif change >= 10:
        answer += 1
        change -= 10
    elif change >= 5:
        answer += 1
        change -= 5
    else:
        answer += 1
        change -= 1

print(answer)