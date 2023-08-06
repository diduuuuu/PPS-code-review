#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(int i=0; i<commands.size();i++){
        vector<int> vt;
       for(int j=commands[i][0]-1;j<commands[i][1];j++){
           vt.push_back(array[j]);
       }
        sort(vt.begin(),vt.end());
        answer.push_back(vt[commands[i][2]-1]);
    }
    return answer;
}