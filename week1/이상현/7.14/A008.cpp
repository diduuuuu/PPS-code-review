#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;



int main(){
  int people;
  vector <int> score;
  int avg, all = 0;
  float count;
  float percent;

  cin >> people;

  for(int i=0; i<people; i++){
    int i_score;
    cin >>i_score;
    all += i_score;
    score.push_back(i_score);
  }
  avg = all / people;
  for(int j = 0; j< people; j++){
    if(score[j] > avg){
      count ++;
    }
  }
  percent = count / people;
  percent = percent * 100;
  cout << fixed << setprecision(3) << percent << "%" << endl;
  
  
  return 0;
}