/*
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> scores(5, vector<int>(4)); // 다섯 명의 참가자가 얻은 평가 점수를 저장하는 2차원 벡터

    // 다섯 참가자가 얻은 평가 점수를 입력 받음
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> scores[i][j];
        }
    }

    int maxScore = 0;
    int winner = 0;

    // 각 참가자의 평가 점수 합을 계산하여 우승자를 찾음
    for (int i = 0; i < 5; i++) {
        int totalScore = 0;
        for (int j = 0; j < 4; j++) {
            totalScore += scores[i][j];
        }

        if (totalScore > maxScore) {
            maxScore = totalScore;
            winner = i + 1; // 참가자 번호는 1부터 시작하므로 i에 1을 더해서 저장
        }
    }

    cout << winner << " " << maxScore << endl; // 우승자와 그의 점수 출력

    return 0;
}
