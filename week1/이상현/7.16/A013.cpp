class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> num_Store;

        for (int i = 0; i < nums.size(); i++) {
            bool found = false;
            for (int j = 0; j < num_Store.size(); j++) {
                if (num_Store[j] == nums[i]) {
                    found = true;
                    num_Store.erase(num_Store.begin() + j);
                    break;
                }
            }
            if (!found) {
                num_Store.push_back(nums[i]);
            }
        }

        return num_Store[0];
    }
};
