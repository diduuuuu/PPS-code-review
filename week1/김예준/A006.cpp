/*
Suppose that a string 's' consisting of bothe lower-case and upper-case
letters are given, Write a function "solution" to return True when the number of
'p' and 'y' in s are the same, and return False other wise.Lower-case and upper-case are not distinguished.
*/
#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int count_p = 0;
    int count_y = 0;
    for(auto c : s){
        c = tolower(c);//소문자로 변환하기
        if(c == 'p') count_p++;
        else if(c == 'y') count_y++;
    }
    return count_p == count_y ;
}
