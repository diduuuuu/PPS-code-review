n = int(input())

for i in range(n):
    problem = list(map(str, input().split()))

    result = float(problem[0])
    for op in problem:
        if op == '@':
            result *= 3
        elif op == '%':
            result += 5
        elif op == '#':
            result -= 7

    print(format(result, ".2f"))