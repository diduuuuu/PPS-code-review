#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> s;

    int N = board.size();

    for (int i = 0; i < moves.size(); i++) {
        int col = moves[i] - 1;
        int row = 0;
        
        while (row < N && board[row][col] == 0) {
            row++;
        }

        if (row < N) {
            if (!s.empty() && s.top() == board[row][col]) {
                answer += 2;
                s.pop();
            } else {
                s.push(board[row][col]);
            }
            board[row][col] = 0;
        }
    }

    return answer;
}