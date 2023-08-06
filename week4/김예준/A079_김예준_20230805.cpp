#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<pair<int,int>> vector(8);
    
    //문제번호와 점수를 저장
    for(int i=0; i<8; i++){
        cin >> vector[i].first;
        vector[i].second = i+1;
    }

    sort(vector.begin(), vector.end(), greater<pair<int,int>>());

    int sum=0;
    int result[5];

    for (int i=0; i<5 ; i++){
        sum += vector[i].first;
        result[i] = vector[i].second;
    }
    sort(result, result+5);
    cout << sum << endl;
    for (int i : result)
        cout << i << " ";

}