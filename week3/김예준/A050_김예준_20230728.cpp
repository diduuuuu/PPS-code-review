
#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
    string str;
    cin>>str;
 
    int len = str.length();
 
    char ch;
 
    for(int i=0; i<len; i++){
        char c = str[i];
        
        if(int(c)>=65&&int(c)<=67){
            ch = int(c)+23;
        }
        else{
            ch = int(c)-3;
        }
        cout<<ch;
    }
    return 0;
}