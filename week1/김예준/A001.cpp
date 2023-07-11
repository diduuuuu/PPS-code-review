/*
Assume you are an awesome parent and want to give you children some cookies.
But, you should give each child at most one cookie.

Each child i has a greed factor g[i], which is the minimum size of a cookie
that the child will be content with;
and each cookie j has a s[j]. If s[j] >= g[i], we can assign the cookie j to the child i, 
and the child i will be content. Your goal is to maximize the number of your content children and outputthe maximumm number.
*/
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s){
    int answer = 0; // 해당하는 수
    int g_size = g.size(); //children 수
    int s_size = s.size(); //cookie 수
    sort(g.begin(), g.end()); //오름차순 정렬
    sort(s.begin(), s.end()); 
    int g_index =0, s_index = 0;

    while (g_index < g_size && s_index < s_size) {
        if (g[g_index] <= s[s_index]) {
            answer++;
            g_index++;
        }
        s_index++;
    }//children 수가 더 커지거나 쿠키가 다 사용되면 종료
    return answer;
    }

};