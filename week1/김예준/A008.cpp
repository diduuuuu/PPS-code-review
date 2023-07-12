/* 백준 - https://www.acmicpc.net/problem/4344
평균은 넘겠지
대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다.
당신은 그들에게 슬픈 진실을 알려줘야 한다.
입력
테스트 케이스 C
둘째 줄부터는 학생수 N
출력
평균을 넘는 학생의 비율을 소수점 셋째 자리까지 출력
-반올림하는 방식 - cout에서는 precision(반올림되고 나올 결과의 위치)-> fixed와 cout.precision을 활용
여기서는 안되는 case도 있어 round함수를 통해 직접해준다. (질문계시판 예시를 참고해서 반례를 찾음)
*/
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    int C;//case 수

    cin >> C;

    for(int i=0; i<C; i++){
        int n_student;
        cin >> n_student;
        vector<int> s_score(n_student);
        double sum=0, average =0, s_count=0;
        for(int j=0; j<n_student; j++){
            int score;
            cin >> score;
            sum += score;
            s_score.push_back(score);
        }
        average = sum/n_student;
        for(auto s : s_score)
            if(average < s) s_count++;
        double ratio = s_count/n_student*100;
        printf("%.3f%%\n",round(ratio*1000)/1000.0);//반올림해주는 작업
    }
    return 0;
}