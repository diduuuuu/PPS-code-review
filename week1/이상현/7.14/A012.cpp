class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<bool> alpha(n, true);

        for (int i = 2; i * i < n; i++) {
            if (alpha[i]) {
                for (int j = i * i; j < n; j += i) {
                    alpha[j] = false;
                }
            }
        }

        for (int i = 2; i < n; i++) {
            if (alpha[i]) {
                count++;
            }
        }

        return count;
    }
};