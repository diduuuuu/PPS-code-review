class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int changes[2] = {0}; // 1:5 / 2:10
        int result = true;

        for(int i = 0; i < bills.size(); i++){
            if(bills[i] == 5){
               changes[0]++; 
            }
            else if(bills[i] == 10){
                if(changes[0] == 0){
                    result = false;
                    break;
                }
                else{
                    changes[0]--;
                    changes[1]++;
                }
            }   
            else if(bills[i] == 20){
                if(changes[0] == 0 || changes[1] == 0){
                    if(changes[0] >= 3){
                        changes[0] -= 3;
                    }
                    else {
                        result = false;
                        break;
                    }
                }
                else{
                    changes[0]--;
                    changes[1]--;
                } 
            }
        }
        return result;
    }
};