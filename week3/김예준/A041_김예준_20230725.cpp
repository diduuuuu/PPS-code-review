#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    bool isWordStart = true; 
    for (char& ch : s) {
        if (isWordStart) {
            ch = toupper(ch); 
            isWordStart = false;
        } else {
            ch = tolower(ch); 
        }

        if (ch == ' ') {
            isWordStart = true; 
        }
    }

    return s;
}