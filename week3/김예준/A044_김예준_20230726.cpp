class Solution {
public:
    bool checkRecord(string s) {
    int absentCount = 0;
    int consecutiveLateCount = 0;

    for (char ch : s) {
        if (ch == 'A') {
            absentCount++;
            consecutiveLateCount = 0; 
        } else if (ch == 'L') {
            consecutiveLateCount++;
        } else {
            consecutiveLateCount = 0; 
        }

        if (absentCount >= 2 || consecutiveLateCount >= 3) {
            return false; 
        }
    }

    return true; 
    }
};