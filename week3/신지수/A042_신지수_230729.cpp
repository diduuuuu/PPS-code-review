#include <string>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string temp_t;
        string temp_s;

        for(int i = 0; i < s.length(); i++){
            if(s[i] != '#'){
                temp_s += s[i];
            }
            else {
                temp_s = temp_s.substr(0,temp_s.length()-1);
            }
        }

        for(int i = 0; i < t.length(); i++){
            if(t[i] != '#'){
                temp_t += t[i];
            }
            else {
                temp_t = temp_t.substr(0,temp_t.length()-1);
            }
        }

        if(temp_s == temp_t){
            return true;
        }
        return false;
    }
};