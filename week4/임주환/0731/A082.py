n = int(input())

info = []
for i in range(n):
    person = list(map(str, input().split()))
    info.append(person)

info.sort(key = lambda x:int(x[0]))

for age, name in info:
    print(age, name)