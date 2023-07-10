/*
Given the order of prerequisite skil
skill and an array skill_trees1 containing skill trees 
created by users are given as parameters,
write a function solution to return the number of available skill trees.
풀이 : 있는 경우 vector에 넣고, 순서 확인하기
*/
#include <string>
#include <vector>

using namespace std;


int solution(string skill, vector<string> skill_trees) {
    int answer = 0; //올바른 string 수의 개수
    vector <char> v_check; //존재하는 문자를 넣는다.
    for(auto st : skill_trees){
        v_check.clear();
        for(auto s : st){
            if(skill.find(s) != string :: npos)
                v_check.push_back(s);
        }//일치하는 경우 vector에 넣는다.
        if(v_check.empty()) {
            answer++;
            continue;
        }//아무것도 없는 경우
        for(int i=0; i< v_check.size(); i++){
            if(v_check[i] != skill[i]) break;
            if( i == v_check.size()-1 && skill[i] == v_check[i]) {
                answer++;
            }
        }//순서가 맞는지 확인
    }
    return answer;
}