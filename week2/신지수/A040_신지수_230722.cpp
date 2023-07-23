#include <iostream>
#include <string>

class Solution {
public:
    bool halvesAreAlike(string s) {
        string a = "";
        string b = "";
        int cnt_a = 0;
        int cnt_b = 0;
        char mouem[10] = {'a','e','i','o','u','A','E','I','O','U'};

        for (int i=0; i<s.length()/2; i++){
            a += s[i];
            b += s[i+s.length()/2];
        }

        for (int i=0; i< a.length(); i++){
            for (int j=0; j<10; j++){
                if (a[i] == mouem[j])
                    cnt_a++;
            }
        }
         for (int i=0; i< a.length(); i++){
            for (int j=0; j<10; j++){
                if (b[i] == mouem[j])
                    cnt_b++;
            }
        }
        if(cnt_a == cnt_b)
            return true;
        else
            return false;
    }
};