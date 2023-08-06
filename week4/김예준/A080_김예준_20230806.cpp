class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> major;
        for (const auto& i : nums){
            //존재하지 않으면 key값으로 추
            if(major.end() == major.find(i)) major[i] = 1;
            else major[i] ++;
        }
        for (const auto& i: major){
             if(i.second > nums.size()/2 ) 
                return i.first;
        }
        return 0;
    }
};