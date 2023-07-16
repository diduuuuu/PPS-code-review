class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> value;

        for(int i=0; i< numRows; ++i){
            value.push_back(vector<int>(i+1, 1));
        } 
        for(int j=2; j< numRows; ++j)
            for(int k=1; k< value[j].size()-1; ++k)
                value[j][k] = value[j-1][k-1] + value[j-1][k]; 
            
        
        return value; 
    }
};