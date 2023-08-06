T = int(input())

for i in range(T):
    n = input()
    s = n[::-1]

    sum = str(int(n) + int(s))

    if sum == sum[::-1]:
        print("YES")
    else:
        print("NO")