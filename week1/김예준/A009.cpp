/*문제 - https://school.programmers.co.kr/learn/courses/30/lessons/12918
문자열 s의 길이가 4혹은 6이고, 숫자로만 구성되어있는지 확인해주는 함수,
solution을 완성하세요. 예를 들어 S가 "a234"이면 false를 리턴하고, "1234"라면 True를 리턴
문법 - isdigit이라는 함수를 통해서 숫자인지 아닌지를 살펴볼 수 있다.
*/
#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = false;
    if(s.length() ==4 || s.length() ==6){
        for (auto n : s){
            if(isdigit(n)) answer = true;
            else {
                answer = false;
                break;
            }
        }//숫자인지 확인하는 함수
    }//길이가 4또는 6인 경우
    return answer;
}