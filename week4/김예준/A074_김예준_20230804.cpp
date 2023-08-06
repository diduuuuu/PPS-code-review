class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";

        for(int i=0;i<s.size();i++){
            //알파벳을 소문자로 바꾸어 저장
            if(isalnum(s[i])) str.push_back(tolower(s[i]));
        }

        for(int i=0;i<str.size()/2;i++){
            if(str[i]!=str[str.size()-1-i]) return false;
        }

        return true;
    }
};