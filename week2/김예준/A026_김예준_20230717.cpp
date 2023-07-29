/*하샤드 수 - https://school.programmers.co.kr/learn/courses/30/lessons/12947
*/
#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int sum = 0;
    int num = x;

    // x의 자릿수 합을 계산
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    // x가 자릿수 합으로 나누어 떨어지는지 확인
    return (x % sum == 0);
}