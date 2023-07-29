/*화성수학- https://www.acmicpc.net/problem/5355*/
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    double n; // 결과를 저장
    char ch;//한 글자씩 저장

    for (int i = 0; i < N; i++) {
        
        cin >> n;
        
        while(1){
            cin.get(ch);
            if(ch=='\n'){
                break;
            }
            if(ch=='@'){
                n*=3;
            }
            if(ch=='%'){
                n+=5;
            }
            if(ch=='#'){
                n-=7;
            }
        }
        cout<<fixed;
        cout.precision(2);
        cout<<n<<"\n";
    }
    return 0;
}