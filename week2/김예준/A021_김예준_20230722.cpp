/* 플래그 - https://www.acmicpc.net/problem/2010
입력
첫째 줄에 멀티탭의 개수 N이 주어진다. (1 ≤ N ≤ 500,000) 이어서 둘째 줄부터 N개의 줄에 걸쳐 각 멀티탭이 몇 개의 플러그를 꽂을 수 있도록 되어 있는지를 나타내는 자연수가 주어진다. 이 자연수는 1,000을 넘지 않는다.

출력
첫째 줄에 최대로 전원에 연결될 수 있는 컴퓨터의 수를 출력한다.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    int maxComputers = v[0];
    for (int i = 1; i < N; ++i) {
        maxComputers --; 
        maxComputers += v[i];
    }

    cout << maxComputers << endl;
    return 0;
}
