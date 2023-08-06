def solution(x):
    answer = True
    comp = x
    summation = 0
    while True:
        summation += x % 10
        x = int(x / 10)
        
        if x <= 0:
            break
    
    if comp % summation == 0:
        answer = True
    else:
        answer = False
    
    return answer