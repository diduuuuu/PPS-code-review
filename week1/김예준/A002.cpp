/*
Given an integer numRows, return the first numRows of Pascal's triangle
In pascal's triangle, each number is the sum of the two numbers directly above it as shown.
Ex) Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
*/
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        for (int i=0; i<numRows ; i++ ){
            result[i].push_back(1);//첫번째에 1넣기
            for(int k=1 ; k<=i ; k++){
                if(k==i) {
                    result[i].push_back(1);
                    continue;
                }//마지막 원소에 1넣기
                if(i>1) result[i].push_back(result[i-1][k]+result[i-1][k-1]); //원소개수가 3개인곳부터 공식활용
            }
        }
        return result;
    }
};