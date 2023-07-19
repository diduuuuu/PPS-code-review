#include <iostream>
#include <string>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int test;
    cin>>test;
 
    double n;
 
    char ch;
 
    for(int i=0; i<test; i++){
    cin>>n;
 
    while(1){
        cin.get(ch);
        if(ch=='\n'){
            break;
        }
        if(ch=='@'){
            n*=3;
        }
 
        if(ch=='%'){
            n+=5;
        }
 
        if(ch=='#'){
            n-=7;
        }
    
    }
    cout<<fixed;
    cout.precision(2);
    cout<<n<<"\n";
    }
}