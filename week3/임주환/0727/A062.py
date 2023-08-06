def solution(a, b):
    answer = ''
    day = 0
    
    if a > 1:
        day += 31
    if a > 2:
        day += 29
    if a > 3:
        day += 31
    if a > 4:
        day += 30
    if a > 5:
        day += 31
    if a > 6:
        day += 30
    if a > 7:
        day += 31
    if a > 8:
        day += 31
    if a > 9:
        day += 30
    if a > 10:
        day += 31
    if a > 11:
        day += 30
    
    day += b
    
    if day % 7 == 1:
        answer = "FRI"
    elif day % 7 == 2:
        answer = "SAT"
    elif day % 7 == 3:
        answer = "SUN"
    elif day % 7 == 4:
        answer = "MON"
    elif day % 7 == 5:
        answer = "TUE"
    elif day % 7 == 6:
        answer = "WED"
    else:
        answer = "THU"
    return answer