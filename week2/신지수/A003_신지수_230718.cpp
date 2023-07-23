#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int len = digits.size();
        int i = len-1;
        int end = digits[i] + 1;
        
        if (end == 10) {
            int carry = 1;
            while(carry) {
                if (i == 0) {
                    digits.insert(digits.begin(), 0);
                    i++;
                }
                digits[i-1] ++;
                digits[i] = 0;
                if (digits[i-1] == 10)
                    i --;
                else
                    carry = 0;
                    
            }
        }
        else
            digits[i] = end;

        return digits;
    }
};