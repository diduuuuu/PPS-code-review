/*OX퀴즈 - https://www.acmicpc.net/problem/8958
*/
#include <iostream>
#include <string>

using namespace std; 

int calculateScore(const string& quizResult) {
    int score = 0;
    int consecutive = 0;

    for (char ch : quizResult) {
        if (ch == 'O') {
            consecutive++;
            score += consecutive;
        } else {
            consecutive = 0;
        }
    }

    return score;
}

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        string quizResult;
        cin >> quizResult;

        int score = calculateScore(quizResult);
        cout << score <<  endl;
    }

    return 0;
}
