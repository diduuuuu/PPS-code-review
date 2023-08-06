class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        while(columnNumber){
            //26씩 나눈어주면서 계산
            ans.insert(ans.begin(), 'A' + (columnNumber-1)%26);
            columnNumber = (columnNumber-1)/26;
        }
        
        return ans;
    }
};