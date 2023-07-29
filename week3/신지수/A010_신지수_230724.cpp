#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int cnt = 0;
    string temp[1000];
    int size = 0;
    int max = 0;
    
    if(s.length() == 1)
        return 1;
    
    for(int i = 1; i <= s.length()/2; i++){//단위
        for (int k = 0; k < s.length()/i; k++){
            temp[k] = s.substr(k*i, i);
        }//단위만큼 잘라서 새로운 arr에 저장
        for (int j = 0; j < s.length()/i-1; j++){
            if(temp[j] == temp[j+1])
                cnt++;
        }
        if (i == 1 && cnt > 1)
            size = cnt * i - cnt + 1;
        else 
            size = cnt * i - cnt;
        cnt = 0;
        
        if(max < size)
            max = size;
    }
    answer = s.length() - max;
    
    return answer;
}