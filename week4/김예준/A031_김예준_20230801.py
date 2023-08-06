'''초콜릿 자르기 - https://www.acmicpc.net/problem/2163
'''
def cut_chocolate(N, M):
    return (N-1) + N * (M-1)

N, M = map(int, input().split())
print(cut_chocolate(N, M))