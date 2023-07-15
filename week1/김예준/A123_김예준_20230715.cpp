/*1로 만들기 - https://www.acmicpc.net/problem/1463
*/
#include <iostream>
using namespace std;

int DP[1000001];
int num;//입력받는 값
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> num;
    DP[2]=DP[3]=1;
    for(int i=4;i<=num;i++){
        DP[i]= DP[i-1]+1;
        if(i%3==0) 
            DP[i] = min(DP[i/3]+1,DP[i]);
        if(i%2==0) 
            DP[i] = min(DP[i/2]+1,DP[i]);
    }
    cout<<DP[num]<<endl;
}