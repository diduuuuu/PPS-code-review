#include <iostream>

using namespace std;
#include<vector>


int main() {
int a1 = 1, a2 = 1, a3 = 1, a4 = 1, a5 = 1, a6 = 1, a7 = 1, a8 = 1, a9 = 1, a0 = 1;
  int count = 1; 
  string number_room;

  cin >> number_room;

  for (int i = 0; i < number_room.size(); i++) {
        char c = number_room[i];
        int number = c - '0';
    
        switch(number){
          case 1:
            --a1;
            break;
          case 2: 
            --a2;
            break;
          case 3:
            --a3;
            break;
          case 4: 
            --a4;
            break;
          case 5:
            --a5;
            break;
          case 6: 
            if(a6 == 0){
              --a9;
              break;
            }else{
              --a6;
              break;
            }
          case 7:
            --a7;
            break;
          case 8: 
            --a8;
            break;
          case 9:
            if(a9 == 0){
              --a6;
              break;
            }else{
              --a9;
              break;
            }
          case 0: 
            --a0;
            break;
        }
      if(a1 < 0 || a2 < 0 || a3 < 0 || a4 < 0 || a5 < 0 || a6 < 0 || a7 < 0 || a8 < 0 || a9 < 0 || a0 < 0 ){
        count++; 
      a1++, a2++, a3++, a4++, a5++, a6++, a7++, a8++, a9++, a0++;
      }
    }
    cout << count;
    return 0;
}
