#include <string>
#include <vector>
#include <cctype>

using namespace std;

bool solution(string s) {
    int i = 0;
    bool answer = false;
    if(s.length() == 4 || s.length() == 6){
        for(i=0; i<s.length(); i++){
            if(isalpha(s[i]))
                break;
        }
    }
    if(i==s.length())
            answer = true;
    return answer;
}