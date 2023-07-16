#include <iostream>

using namespace std;
#include<vector>


int main() {
    int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  int all = 0;
  all = a*a + b*b + c*c + d*d + e*e;
  int key = 0;
  key = all % 10;

  cout << key;
  
    return 0;
}
