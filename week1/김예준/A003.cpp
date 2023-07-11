/*
You are given a large integer represented an integer array digits, where
each digits[i] is the ith digit of the integer. The digits are ordered from
significant in left-to-right order. The large integer does not contain any leading 0's

Increment the large integer by one and return the resulting array of digits.
Input: digits = [1,2,3]
Output: [1,2,4]
문법 : insert(위치, 들어갈 원소)를 사용
*/
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int d_index;
        d_index = digits.size()-1;
        while(d_index>=0 && digits[d_index]+1>=10){
            digits[d_index] = (digits[d_index]+1)%10;
            if(d_index == 0) {
                digits.insert(digits.begin(),1);
                return digits;
            }//하나 남은 경우
            d_index--;
        }//10보다 커지는 경우
        digits[d_index]= digits[d_index]+1;
        return digits;
    }
};