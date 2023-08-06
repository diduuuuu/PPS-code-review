n = int(input())

count = 0
test_list = []
for i in range(n):
    s = input()
    s = list(s)

    alpha = [0] * 26

    flag = True
    for j in range(len(s)):
        if j == 0:
            alpha[ord(s[j]) - ord('a')] += 1
        else:
            if alpha[ord(s[j]) - ord('a')] != 0 and s[j] != s[j - 1]:
                flag = False
                break
            else:
                alpha[ord(s[j]) - ord('a')] += 1

    if flag:
        test_list.append(s)
        count += 1

print(count)