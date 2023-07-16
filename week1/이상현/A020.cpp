#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int count = 0; 
  int a1[4][2] = {0};
  int max = 0;
  
  for(int i =0; i<4; i++){
    int a, b =0;
    cin >> a >> b;
    a1[i][0] = a;
    a1[i][1] = b;
    count += b;
    count -= a;
    if(count > max){
      max = count;
    }
  }
  cout << max; 
    return 0;
}
