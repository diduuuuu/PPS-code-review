/*스택 - https://www.acmicpc.net/problem/10828
*/
#include <iostream>
#include <stack>
#include <string>
using namespace std;

string command[100001];//명령문을 저장하는 배열
int command_num;//명령문 수를 저장
stack <int> my_stack;//stack을 선언

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> command_num;
    for(int i =0; i<command_num;i++){
        cin>>command[i];
        string temp =command[i];
        if(temp.find("push")!=-1){
            int num;
            cin >> num;
            my_stack.push(num);
        }
        else if (temp.find("size")!=-1)
            cout << my_stack.size()<<endl;
        else if(my_stack.empty()){
            if (temp.find("empty")!=-1){
                cout << (int) my_stack.empty()<<endl;
                continue;
            }
            cout << -1<<endl;
            continue;
        }
        else if (temp.find("top")!=-1)
            cout << my_stack.top()<<endl;
        else if (temp.find("pop")!=-1){
            cout << my_stack.top() <<endl;
            my_stack.pop();
        }
        else if (temp.find("empty")!=-1)
            cout << (int) my_stack.empty()<<endl;
    }
}