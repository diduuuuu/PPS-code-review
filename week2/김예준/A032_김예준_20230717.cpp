/*
*/
#include <iostream>

using namespace std;

int getResidents(int k, int n) {
    int residents[15][15] = {0}; // 아파트 배열 (0층~14층, 1호~14호)

    // 0층의 i호에는 i명이 산다
    for (int i = 1; i <= 14; i++) {
        residents[0][i] = i;
    }

    // k층의 n호에 거주민 수 계산
    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= n; j++) {
            residents[i][j] = residents[i - 1][j] + residents[i][j - 1];
        }
    }

    return residents[k][n];
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int k, n;
        cin >> k >> n;

        int result = getResidents(k, n);
        cout << result << endl;
    }

    return 0;
}