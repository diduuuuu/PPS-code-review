/*1, 2, 3 더하기- https://www.acmicpc.net/problem/9095
*/
#include <iostream>
using namespace std;

int T;//테스트 케이스 개수를 저장하는 변수
int DP[12];//합은 나타내는 방법을 저장하는 배열

int main(){
    ios:: sync_with_stdio(false);
    cin.tie(0);

    cin >> T;
    DP[0]=DP[1]=1;//0은 0으로, 1은 1로
    DP[2]=2;//2는 1+1과 2로 표현 가능

    for(int i =0 ; i<T ; i++){
        int input;
        cin >> input;
        for(int i=3 ;i<=input ;i++){
            if(DP[i]!=0) continue;
            
            DP[i]=DP[i-1]+DP[i-2]+DP[i-3]; //3과 2와 1로 표현가능하기 때문에 이렇게 표현
        }
        cout << DP[input] << endl;
    }
}