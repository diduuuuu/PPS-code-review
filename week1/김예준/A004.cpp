/*
나누어 떨어지는 숫자 배열
array의 각 element 중 divisor로 나누어 떨어지는 값을 오름차수능로 정렬한 배열을 반환하는 함수를 작성
diviosr로 나누어 떨어지는 element가 하나도 없다면 배열에 -1을 담아 반환
+ arr은 자연수를 담은 배열 /; divisor도 자연수 / array는 길이 1이상인 배열
*/
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for ( int num : arr){
        if(num % divisor == 0) answer.push_back(num);
    }
    sort(answer.begin(), answer.end());
    if(answer.empty()) answer.push_back(-1);
    return answer;
}