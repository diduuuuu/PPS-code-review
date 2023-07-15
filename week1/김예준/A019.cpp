/*숫자의 개수 - https://www.acmicpc.net/problem/2577
세 개의 자연수 A, B, C가 주어질 때 A × B × C를 계산한 결과에 0부터 9까지 각각의 숫자가
몇 번씩 쓰였는지를구하는 프로그램을 작성

예) A = 150, B = 266, C = 427 이라면 A × B × C = 150 × 266 × 427 = 17037300 이 되고, 계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.
*/
#include <iostream>
using namespace std;

int A,B,C ;// 곱하는 세가지의 숫자

int count_result[10];//나온 것을 계산하는 숫자

void cal(int num){
    while(num!=0){
        count_result[num%10]++;
        num/=10;
    }
}

int main(){
    ios :: sync_with_stdio(false); cin.tie(0);

    cin >> A >> B >> C;
    
    int result = A*B*C;
    
    cal(result);
    for(int i=0;i<10;i++)
        cout << count_result[i]<<'\n';
}