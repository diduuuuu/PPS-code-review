def solution(s):
    answer = True
    
    p = s.count("p") + s.count("P")
    y = s.count("y") + s.count("Y")
    
    if p != y:
        answer = False

    return answer
