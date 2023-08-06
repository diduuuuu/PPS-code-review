num = input()

num_list = list(num)
num_list.sort()
num_list.reverse()

result = ''
for i in range(len(num)):
    result += num_list[i]
print(result)