class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ordered_heights = heights;
        //정렬
        sort(ordered_heights.begin(), ordered_heights.end());
        
        int ret = 0;
        int n = heights.size();
        //정렬한 것과 일치하지 않는 것을 출력
        for (int i = 0; i < n; ++i) {
            if (ordered_heights[i] != heights[i]) {
                ++ret;
            }
        }
        return ret;
    }
};