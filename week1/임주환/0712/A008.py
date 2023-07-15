import statistics

n = int(input())


for i in range(n):
    avg_list = list(map(int, input().split()))
    del avg_list[0]

    avg = statistics.mean(avg_list)

    count = 0
    for score in avg_list:
        if score > avg:
            count += 1

    result = (count / len(avg_list)) * 100

    print(format(result, ".3f") + "%")

    
