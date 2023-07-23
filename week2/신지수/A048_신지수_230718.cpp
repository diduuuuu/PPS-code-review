#include <iostream>
using namespace std;

int main(){
	int n;
	int cnt = 0;
	string word;
	cin >> n;

	for(int i=0; i<n; i++){
		cin >> word;
		int size = word.length();
		bool flag = true;
		
		for(int j=0; j<size; j++){
			for(int k=0; k<j; k++){
				if(word[j] != word[j-1] && word[j] == word[k]){
					flag = false;
					break;			
				}				
			}
		}
		if(flag) cnt++;
	}
	
	cout << cnt;

    return 0;
}