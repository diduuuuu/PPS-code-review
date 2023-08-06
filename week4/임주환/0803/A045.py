s = input()

alpha_num = [0] * 26

s = s.upper()

s_list = list(s)

for a in s_list:
    alpha_num[ord(a) - ord('A')] += 1

max = 0
for i in range(len(alpha_num)):
    if max < alpha_num[i]:
        max = alpha_num[i]

output = ''
for i in range(len(alpha_num)):
    if max == alpha_num[i]:
        output += chr(i + ord("A"))
if len(output) == 1:
    print(output)
else:
    print("?")