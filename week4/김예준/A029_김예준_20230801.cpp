/*문문문 - https://www.acmicpc.net/problem/17210
유신이는 여러 개의 문을 통과해 밖으로 나가 수 있는 방에 갇힘
규칙이 존재
1.문을 여는 방법을 두가지 - 당기기, 열기
2. 연속 2번 같은 방법으로 문을 열 수 없다.
3. 2의 배수 문 - 그 전의 2의 배수와 같은 방식
4. 3의 배수 문 - 그 전의 3의 배수와 같은 방식
0 : 밀기 , 1 : 당기기
*/

#include <iostream>

using namespace std;

int main(){
    int N;
    int first_method;

    cin >> N;
    cin >> first_method;
    
    if(N > 5) cout << "Love is open door" << endl;
    
    else {
        for(int i=0 ; i < N-1 ; i++){
            if(first_method == 0) {
                cout << "1" << endl;
                first_method = 1;
            }
            else {
                cout << "0" << endl;
                first_method = 0;
            }
        } 
    }

}