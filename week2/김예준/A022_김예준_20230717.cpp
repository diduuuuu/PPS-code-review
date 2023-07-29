/*핸드폰 요금 - https://www.acmicpc.net/problem/1267
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> T(N);
    for (int i = 0; i < N; ++i) {
        cin >> T[i];
    }

    int totalY = 0; // 영식 요금
    int totalM = 0; // 민식 요금

    for (int i = 0; i < N; ++i) {
        totalY += ((T[i] / 30) + 1) * 10; // 영식 요금 계산
        totalM += ((T[i] / 60) + 1) * 15; // 민식 요금 계산
    }

    if (totalY < totalM) {
        cout << "Y " << totalY << endl;
    } else if (totalY > totalM) {
        cout << "M " << totalM << endl;
    } else {
        cout << "Y M " << totalY << endl; // 두 요금이 같을 경우
    }

    return 0;
}