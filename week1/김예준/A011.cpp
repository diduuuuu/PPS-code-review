/*실패율 - https://school.programmers.co.kr/learn/courses/30/lessons/42889
실패울의 정의
스테이지에 도달했으나 아직 클리어하지 못한 플레이어의 수 / 스테이지에 도닳한 플레이어 수
전체 스텡이지 개수 N, 게임을 이용하는 사용자가 현재 멈춰있는 번호가 담긴 배열
stage가 매개변수로 주어질 때, 실패율이 높은 스테이지부터 내림차순으로 스테이지의 번호가 담겨있는
배열을 return하도록 solution을 완성
실패율이 같은 스테이지가 있다면 작은 번호의 스테이지가 먼저 오도록 한다.
스테이지에 도달한 유저가 없는 경우 해당 스테이지의 실패율은 0으로 정의한다.
N	stages	result
5	[2, 1, 2, 6, 2, 4, 3, 3]	[3,4,2,1,5]
4	[4,4,4,4,4]	[4,1,2,3]
*/
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(pair<int,double> &a, pair<int,double> &b){
    if(a.second == b.second) return a.first < b.first;
    else return a.second > b.second; 
}
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int,double>> failure ;
    sort(stages.begin(), stages.end(), greater<>());//정렬을 한다.
    
    for(int i=1; i<=N ;i++){
        int count=0;
        int size = stages.size();
        while(!stages.empty() && i==stages.back()){
            count++;
            stages.pop_back();
        }//올라갈 동안 계속한다.
        // cout << size << endl;
        // cout << "\\"<<(double)count/size;
        if(size==0) failure.push_back({i,0});
        else failure.push_back({i,(double)count/size});//실패율을 저장
    }
    sort(failure.begin(), failure.end(),compare);//실패율 순으로 정렬
    for(auto i : failure){
        answer.push_back(i.first);
    }
    return answer;
}

int main(){
    vector <int> temp = {1,1,1,1};
    for(auto i : solution(2,temp)){
        cout << i << ",," ;
    }
    return 0;
}