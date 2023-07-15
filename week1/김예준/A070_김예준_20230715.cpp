/*카드2 - https://www.acmicpc.net/problem/2164
*/
#include <iostream>
#include <deque>
using namespace std;

int N;
deque <int> my_deque;//숫자가 들어가는 곳을 설정

int main(){
    ios::sync_with_stdio(false); cin.tie(0);

    cin >> N;

    for(int i=1; i<=N; i++){
        my_deque.push_back(i);
    }//숫자를 넣어준다.

    while(my_deque.size()!=1){
        my_deque.pop_front();//가장 앞의 수를 제거
        my_deque.push_back(my_deque.front());//가장 앞의 수를 뒤로 보냄
        my_deque.pop_front();
    }//하나 남을 때까지 반복
    cout << my_deque.front();   
    return 0;
}