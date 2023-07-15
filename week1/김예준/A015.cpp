/*r검증수 - https://www.acmicpc.net/problem/2475
검증수는 고유번호의 처음 5자리에 들어가는 5개의 숫자를
각각 제곱한 수의 합을 10으로 나눈 나머지
예) 고유번호의 처음 5자리의 숫자들이 04256이면, 각 숫자를 제곱한 수들의 합
0+16+4+25+36 = 81 을 10으로 나눈 나머지인 1이 검증수이다.
*/
#include <iostream>
using namespace std;
int main(){
    ios :: sync_with_stdio(false); cin.tie(0);
    int sum=0;//제곱한 수들의 합을 저장
    for(int i =0,a ; i<5 ;i ++){
        cin >> a;
        sum+=a*a;
    }
    cout << sum%10;//10으로 나눈 나머지를 출력
}