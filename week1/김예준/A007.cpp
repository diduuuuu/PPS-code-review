/*음계 - https://www.acmicpc.net/problem/2920
첫째 줄에 8개 숫자가 주어진다. 이 숫자는 문제 설명에서 설명한 음이며, 1부터 8까지 숫자가 한 번씩 등장한다.
출력 : 첫째 줄에 ascending, descending, mixed 중 하나를 출력한다.
- 입력하면서 결과를 분석하는 것이 가능하다.
*/
#include <iostream>

using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int asc=1, desc=1;

    for(int i=0; i<8; i++){
        int num;
        cin >> num;
        if(num!=i+1) asc=0;
        if(num!=8-i) desc=0;
    }//입력한 순서대로 저장
    if(asc) cout << "ascending\n";
    else if(desc) cout << "descending\n";
    else cout << "mixed\n";
}