/*지능형 기차 - https://www.acmicpc.net/problem/2455
입력
각 역에서 내린 사람 수와 탄 사람 수가 빈칸을 사이에 두고 첫째 줄부터 넷째 줄까지 역 순서대로 한 줄에 하나씩 주어진다. 
출력
첫째 줄에 최대 사람 수를 출력한다.  
*/
#include <iostream>
using namespace std;

int main() {
    int passengers[4][2];

    // 입력 받기
    for (int i = 0; i < 4; ++i) {
        cin >> passengers[i][0] >> passengers[i][1];
    }

    int totalPassengers = 0; // 각 역의 총 사람 수를 저장할 변수 초기화
    int maxPassengers = 0;   // 최대 사람 수를 저장할 변수 초기화

    // 각 역의 총 사람 수 계산
    for (int i = 0; i < 4; ++i) {
        totalPassengers += passengers[i][1] - passengers[i][0];
        maxPassengers = max(maxPassengers, totalPassengers);
    }

    cout << maxPassengers << endl; // 최대 사람 수 출력
    return 0;
}



