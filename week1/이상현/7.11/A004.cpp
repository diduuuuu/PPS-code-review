#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    sort(arr.begin(), arr.end());
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] % divisor == 0){
            answer.push_back(arr[i]);
        }
    }
    
    if(answer.size() == 0){
        answer.push_back(-1);
    }
    return answer;
}



int main(int argc, char *argv[]) {

	vector<int> arr = [5, 9, 7, 10];
  
}