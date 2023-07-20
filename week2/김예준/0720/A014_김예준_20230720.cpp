/*SUMMARY RANGE - https://leetcode.com/problems/summary-ranges/
You are given a sorted unique integer array nums.
A range [a,b] is the set of all integers from a to b (inclusive).
Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.
Each range [a,b] in the list should be output as:

"a->b" if a != b
"a" if a == b
*/
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
         if (nums.empty()) {
            return result;
        }
        if (nums.size()==1) {
            result.push_back(to_string(nums[0]));
            return result;
        }
        int first = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            // 같지 않은 경우
            if (nums[i - 1] + 1 != nums[i]) {
                if (first == nums[i - 1]) {
                    result.push_back(to_string(first));
                } else {
                    result.push_back(to_string(first) + "->" + to_string(nums[i - 1]));
                }
                first = nums[i];
            }
            // 마지막 상황을 고려
            if (i == nums.size() - 1) {
                if (first == nums[i]) {
                    result.push_back(to_string(first));
                } else {
                    result.push_back(to_string(first) + "->" + to_string(nums[i]));
                }
            }
        }
        return result;
    }
};
