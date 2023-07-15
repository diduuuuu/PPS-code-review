t_in = [0] * 4
t_out = [0] * 4

people = 0
max = 0
for i in range(4):
    t_out[i], t_in[i] = map(int, input().split())
    people += t_in[i]
    people -= t_out[i]

    if people >= max:
        max = people

print(max)