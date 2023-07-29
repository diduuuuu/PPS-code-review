#include <iostream>
#include <vector>
using namespace std;

//미완성 코드.. 왜 안되냐
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> storeNum;
        int cnt[10000] = {0};
        int singleNum;

        for (int i = 0; i < nums.size(); i++){//받은 vector 전체 한번 쓱 훑기
                if(storeNum.empty()){
                    storeNum.push_back(nums[i]);
                    cnt[nums[i]]++;
                }//첫 원소는 그냥 넣기
    
                else
                    for (int j = 0; j < storeNum.size(); j++){
                        if(nums[i] == storeNum[j])
                            cnt[nums[i]]++;
                        else {
                            storeNum.push_back(nums[i]);
                            cnt[nums[i]]++;
                        }
                    }
            }
        for (int i = 0; i < 10000; i++){
            if(cnt[i] == 1)
                singleNum = i;
        }
    return singleNum;
    }
};


//히라 코드 참고한거 .. 이렇게 짧게 된다고 ..? 박탈감 .. ^^
class Solution2 {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        for (int i = 0; i < nums.size(); i++){
            result ^= nums[i];
        }

        return result;
    }
};