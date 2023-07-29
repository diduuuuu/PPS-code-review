/*큰 수 만들기 - https://school.programmers.co.kr/learn/courses/30/lessons/42883
*/
#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    int n = number.length();
    int remain = n - k; // 남아야 하는 숫자의 개수

    int start = 0;
    while (remain > 0) {
        char maxDigit = number[start];
        int maxIndex = start;

        // 남은 숫자 중에서 가장 큰 숫자를 찾기
        for (int i = start; i <= n - remain; i++) {
            if (number[i] > maxDigit) {
                maxDigit = number[i];
                maxIndex = i;
            }
        }

        answer += maxDigit; // 가장 큰 숫자를 결과에 추가
        start = maxIndex + 1; // 이전에 찾은 숫자보다 앞에 있는 숫자는 더이상 고려하지 않음
        remain--; // 남아야 하는 숫자의 개수 감소
    }

    return answer;
}



