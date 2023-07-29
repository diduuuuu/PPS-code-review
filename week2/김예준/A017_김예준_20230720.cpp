/*방번호 - https://www.acmicpc.net/problem/1475
다솜이는 은진이의 옆집에 새로 이사왔다. 
다솜이는 자기 방 번호를 예쁜 플라스틱 숫자로 문에 붙이려고 한다.

다솜이의 옆집에서는 플라스틱 숫자를 한 세트로 판다.
한 세트에는 0번부터 9번까지 숫자가 하나씩 들어있다.
다솜이의 방 번호가 주어졌을 때, 필요한 세트의 개수의 최솟값을 출력하시오.
(6은 9를 뒤집어서 이용할 수 있고, 9는 6을 뒤집어서 이용할 수 있다.)
풀이: 6과 9은 같은 수로 생각
문법 : vector에서 가장 큰 값을 뽑아내는 함수 -> *max_element
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string input;
    cin >> input;

    vector<int> count(10, 0); // 0부터 9까지의 개수를 저장할 벡터

    // 숫자의 개수를 세기
    for (char num : input) {
        count[num - '0']++;
    }

    // 6과 9를 합쳐서 계산
    int sixNineCount = count[6] + count[9];
    if (sixNineCount % 2 == 1) 
        sixNineCount = (sixNineCount / 2) + 1;
    else
        sixNineCount /= 2;
    // 홀수, 짝수인 경우 나누기

    // 6과 9를 제외한 나머지 숫자 중 가장 많은 개수를 찾아서 필요한 세트 개수 계산
    count[6] = count[9] = sixNineCount;
    int maxCount = *max_element(count.begin(), count.end());

    cout << maxCount << endl;

    return 0;
}
