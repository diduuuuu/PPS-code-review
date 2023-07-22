n = int(input())
c_pair = int(input())

com = [[0 for j in range(n)] for i in range(n)]
virus = [0]
for i in range(c_pair):
    c1, c2 = map(int, input().split())

    com[c1 - 1][c2 - 1] = 1

i = 0
j = 0
i_count = 0
while True:
    if com[i][j] == 1 or com[j][i] == 1:
        virus.append(j)
        if virus.count(j) > 1:
            del virus[len(virus)  -1]
        
    j += 1
    if j >= n:
        j = 0
        i_count += 1

        if i_count >= len(virus):
            break

        i = virus[i_count]

print(len(virus) - 1)