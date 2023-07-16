#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int n; 
  int num= 0;

  cin >> n;

  for(int i=0; i< n; i++){
    int k = 0;
    cin >> k;
    k = k-1;
    num += k;
  }
  num += 1;
  cout<< num;
    return 0;
}
