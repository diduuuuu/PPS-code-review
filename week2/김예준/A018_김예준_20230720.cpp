/* 보물 - https://www.acmicpc.net/problem/1026
길이가 N인 정수 배열 A와 B가 있다. 다음과 같이 함수 S를 정의하자
S = A[0] X B[0] + ... +A[N-1] X B[N-1]
S의 값을 가장 작게 만들기 위해 A의 수를 재배열하면 안 된다.
S의 최솟값을 출력하는 프로그램을 작성하자.
<입력>
5
1 1 1 6 0
2 7 8 3 1
<출력>
18
알고리즘 - A에 저장, B에 저장 -> for문으로 모두 비교하면 n^2의 time complexity

*/
#include <iostream>
#include <algorithm>
#include <vector>
#define NUM 2
using namespace std;


int input_num;//입력하는 수 N
int result;//결과값을 저장하는 변수
vector <int> array_A;
vector <int> array_B;

bool compare(int a, int b){
    return a> b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> input_num;

    for(int i =0; i<input_num;i++){
        int num;
        cin >>num;
        array_A.push_back(num);
    }//A를 입력받음
    
    sort(array_A.begin(), array_A.end());//A를 입력받고 정렬

    for(int i =0; i<input_num;i++){
        int num;
        cin >>num;
        array_B.push_back(num);
    }//B를 입력받으면서 A를 재배열

    sort(array_B.begin(), array_B.end(),compare);//B를 입력받고 내림차순으로 정렬
    
    for(int i =0 ;i<input_num;i++)
        result += array_A[i]*array_B[i];
    cout << result;
}