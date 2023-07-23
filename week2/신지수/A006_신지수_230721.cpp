#include <string>
#include <iostream>
#include <cctype>

using namespace std;

bool solution(string s) {
    bool answer = false;
    int p = 0;
    int y = 0;
    
    for (int i = 0; i < s.length(); i++) {
        char temp = tolower(s[i]);
        if (temp == 'y') y++;
        else if (temp == 'p') p++;
    }
    
    if (y == p) answer = true;
    
    return answer;
}
