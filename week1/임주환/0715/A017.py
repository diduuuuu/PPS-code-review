num = int(input())

num_set = [0] * 9

for i in str(num):
    if int(i) == 9:
        num_set[6] += 1
    else:
        num_set[int(i)] += 1

if num_set[6] % 2 == 0:
    num_set[6] /= 2
else:
    num_set[6]  = int(num_set[6] / 2) + 1

num_set.sort()
num_set.reverse()

print(int(num_set[0]))