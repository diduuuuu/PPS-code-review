#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


bool desc(int a, int b) {
    return a > b;
}

int main(){
    int a[8];
    int b[8];

    int sum = 0;
    int numL[5];
    int cnt = 0;

    for (int i=0; i<8; i++){
        cin >> a[i];
    }

    copy_n(a, 8, b);    //a 복제본 b 생성
    
    sort(b, b+8, desc);   //sorting

    for (int i =0; i<5; i++){
        sum += b[i];
    }

    for (int i=0; i<5; i++){
        for (int j=0; j<8; j++){
            if(b[i] == a[j]){
                numL[cnt] = j;
                cnt++;
            }
        }
    }

    sort(numL, numL+5);

    cout << sum << endl;
    for (int i=0; i<5; i++){
        cout << numL[i] + 1 << " ";
    }
    
    
    return 0;
}