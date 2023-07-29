/*
문자열 압축 - https://school.programmers.co.kr/learn/courses/30/lessons/60057
압축할 문자열 s가 매개변수로 주어질 때, 위에 설명한 방법으로 1개 이상 단위로 문자열을
잘라 압축하여 표현한 문자열 중 가장 짧은 것의 길이를 return 하도록 solution함수를 완성
예시)
s	result
"aabbaccc"	7
"ababcdcdababcdcd"	9
"abcabcdede"	8
"abcabcabcabcdededededede"	14
"xababcdcdababcdcd"	17
알고리즘 - 단위별로 확인하면 최소가 되는 숫자를 확인한다. Index를 저장해서 보여준다.
*/
#include <iostream>
#include <string>

using namespace std;

int solution(string s) {
    int answer = s.length();

    // 문자열의 길이가 1인 경우 압축이 불가능하므로 바로 길이를 반환
    if (s.length() == 1) {
        return 1;
    }

    for (int i = 1; i <= s.length() / 2; ++i) {
        string compressed = "";
        string pattern = s.substr(0, i); // 첫 i개의 문자로 이루어진 패턴
        int count = 1;

        for (int j = i; j < s.length(); j += i) {
            if (pattern == s.substr(j, i)) {
                // 패턴과 일치하는 경우 count를 증가시키고 다음 패턴 검사
                count++;
            } else {
                // 패턴과 일치하지 않는 경우 압축 결과에 추가
                if (count > 1) {
                    compressed += to_string(count);
                }
                compressed += pattern;
                pattern = s.substr(j, i);
                count = 1;
            }
        }

        // 마지막 패턴에 대한 처리
        if (count > 1) {
            compressed += to_string(count);
        }
        compressed += pattern;

        // 압축한 문자열의 길이를 갱신
        answer = min(answer, int(compressed.length()));
    }

    return answer;
}


