def solution(s):
    answer = ''
    
    listStr = list(s)
    for i in range(len(listStr)):
        if i == 0:
            if listStr[i].isalpha():
                if listStr[i] >= 'a' and listStr[i] <= 'z':
                    listStr[i] = listStr[i].upper()
        elif listStr[i - 1] == ' ' and listStr[i].isalpha():
            listStr[i] = listStr[i].upper()
        elif listStr[i].isalpha():
            listStr[i] = listStr[i].lower()
       
    answer = ''.join(listStr)
    return answer