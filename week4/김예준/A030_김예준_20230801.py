'''좋은날 나쁜날 - https://www.acmicpc.net/problem/17211
기분이 어떨지 알려주는 프로그램 만들기
'''
#반올림해주는 함수
def roundUp(num):
    if num - int(num) < 0.5:
        return int(num)
    else:
        return int(num)+1

def solution():
    #예측하는 날과 기분을 저장
    N, emotion = map(int, input().split())
    #확률 저장
    prob = list(map(float, input().split()))
    prob_good = [1-emotion]
    prob_bad = [emotion]
    for i in range(N):
        prob_good.append(prob_good[i]*prob[0]+prob_bad[i]*prob[2])
        prob_bad.append(prob_good[i]*prob[1]+prob_bad[i]*prob[3])
    print(roundUp(prob_good[-1]*1000))
    print(roundUp(prob_bad[-1]*1000))
    
solution()