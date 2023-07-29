/*poser of four - https://leetcode.com/problems/power-of-four/submissions/
*/
class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) {
        return false;
        }

        // n이 4의 거듭제곱인지 확인
        while (n % 4 == 0) {
            n /= 4;
        }

    return n == 1;
    }
};