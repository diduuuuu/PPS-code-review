def solution(skill, skill_trees):
    answer = 0
    
    for skill_tree in skill_trees:
        order = []
        flag = True
        for i in range(len(skill_tree)):
            for j in range(len(skill)):
                if skill_tree[i] == skill[j]:
                    order.append(skill[j])
                
        
        for j in range(len(order)):
            if order[j] != skill[j]:
                flag = False
                break
        
        if flag == True:
            answer += 1
            
    return answer