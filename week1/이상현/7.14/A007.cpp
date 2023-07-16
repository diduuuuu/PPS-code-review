#include <iostream>

using namespace std;
#include<vector>


int main() {
    vector<int> song;

  for(int i=0; i< 8; i++){
    int k;
    cin >> k;
    song.push_back(k);  
  }

  if(song[0] == 1){
    for(int i=1; i< 8; i++){
    if(song[i] != i + 1){
       cout << "mixed";
      return 0;
    }
    }
    cout << "acsending";
  } 
  else if(song[0] == 8){
    for(int i=1; i< 8; i++){
    if(song[i] != 8 - i){
      cout << "mixed";
      return 0;  
    }
    
    }
    cout << "descending";
    
  }

    return 0;
}
