#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int result = 0;
        sort(g.begin(), g.end()); 
        sort(s.begin(), s.end());
        int i =0;
        int j = 0;

        while(i < g.size() && j < s.size()){
            if(s[j] >= g[i]){
                i++;
                result++;
            }
           
                j++;
            
        }
        return result;
    }
};


int main(int argc, char *argv[]) {

	std::vector<int> s = { 1, 1, 3, 5 };
	std::vector<int> g = { 1, 2, 3 };

	Solution sln;
	cout << sln.findContentChildren(g, s) << endl;

}