import sys
import copy

score = []
problem = []
for i in range(8):
    score.append(int(sys.stdin.readline()))

idx = copy.deepcopy(score)
score.sort()
score.reverse()

sum = 0
for i in range(5):
    sum += score[i]
    for j in range(8):
        if idx[j] == score[i]:
            problem.append(j + 1)

problem.sort()

print(sum)
for i in range(5):
    print(problem[i], end=" ")
print()