class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) {
        return ""; 
    }

    string commonPrefix = strs[0]; 

    for (int i = 1; i < strs.size(); i++) {
        int j = 0;
        while (j < commonPrefix.length() && j < strs[i].length() && commonPrefix[j] == strs[i][j]) {
            j++;
        }
        commonPrefix = commonPrefix.substr(0, j); 
        if (commonPrefix.empty()) {
            return ""; 
        }
    }

    return commonPrefix;
    }
};