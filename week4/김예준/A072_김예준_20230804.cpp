class Solution {
public:
    int dayOfYear(string date) {
        int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        
        int y = stoi(date.substr(0, 4)), m = stoi(date.substr(5, 2)), d = stoi(date.substr(8, 2));
        //윤년인지 확인
        if(y%400 == 0 || (y%100!=0 && y%4==0)) days[1] = 29;

        int answer = 0;
        for(int i = 0; i < m - 1; i ++) answer += days[i];
        return answer + d;
    }
};