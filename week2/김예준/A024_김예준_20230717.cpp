/*Lemonade Change - https://leetcode.com/problems/lemonade-change/
*/
# include <vector>

using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five_count = 0; // 현재 가지고 있는 $5 지폐의 개수
    int ten_count = 0;  // 현재 가지고 있는 $10 지폐의 개수

    for (int bill : bills) {
        if (bill == 5) {
            five_count++;
        } else if (bill == 10) {
            if (five_count >= 1) {
                five_count--;
                ten_count++;
            } else {
                return false;
            }
        } else if (bill == 20) {
            if (ten_count >= 1 && five_count >= 1) {
                ten_count--;
                five_count--;
            } else if (five_count >= 3) {
                five_count -= 3;
            } else {
                return false;
            }
        }
    }

    return true;
    }
};