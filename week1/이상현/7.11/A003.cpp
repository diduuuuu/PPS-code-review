class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        int last = size - 1;

        while (last >= 0 && digits[last] == 9) {
            digits[last] = 0;
            last--; // 한자리 앞으로 이동
        }

        if (last < 0) {
            digits.insert(digits.begin(), 1); // 모든 자리가 9여서 ex. 99999 -> 00000으로 된 경우 맨 앞에 1 추가
        } else {
            digits[last]++;
        }
        return digits;
    }
};
