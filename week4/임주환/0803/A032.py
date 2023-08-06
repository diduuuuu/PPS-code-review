T = int(input())


for i in range(T):
    apartment = []
    k = int(input()) # 층
    n = int(input()) # 호수

    for j in range(k + 1): # 층, j == 현재 층

        infos = []
        for l in range(n): # 호수, l == 현재 호수
            if j == 0:
                infos.append(l + 1)
            else:
                sum = 0
                for apartment_idx in range(l + 1):
                    sum += apartment[j - 1][apartment_idx]
                infos.append(sum)

        apartment.append(infos)
    print(apartment[k][n - 1])
