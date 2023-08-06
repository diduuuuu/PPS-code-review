n = int(input())

first_names = [0] * 26
for i in range(n):
    name = input()
    first_names[ord(name[0]) - ord("a")] += 1

flag = False
for i in range(len(first_names)):
    if first_names[i] >= 5:
        print(chr(i + ord('a')), end="")
        flag = True

if flag == False:
    print("PREDAJA")
else:
    print()