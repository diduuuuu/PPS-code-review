/*요세푸스 문제0 - https://www.acmicpc.net/problem/11866
*/
#include <iostream>
#include <deque>
using namespace std;

int N,K;
deque <int> q;//숫자들을 저장하는 deque이다.
deque <int> erase_que;//제거하는 순서대로 저장하는 deque

int main(){
    ios :: sync_with_stdio(false); cin.tie(0);

    cin >> N >> K;

    for(int i =1;i<=N;i++)
        q.push_back(i);

    int start=0;//처음에 시작하는 부분을 설정
    while(!q.empty()){
        start=(start+K-1)%q.size();
        erase_que.push_back(q.at(start));
        q.erase(q.begin()+start);
    }//순서대로 deque에 저장한다.
    cout << "<";
    for(int i : erase_que){
        if(erase_que.back()==i) {
            cout << i;
            break;
        }//마지막 부분은 숫자만 출력
        else cout << i << ", ";
    }//출력하는 부분
    cout << ">";
    return 0;
}