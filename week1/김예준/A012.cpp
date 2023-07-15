/*204- Count Primes - https://leetcode.com/problems/count-primes/
Give an integer n,
return the number of prime numbers that are strictly less than n.
주어진 숫자보다 적은 소수의 개수를 적어
알고리즘 - 소수를 어떻게 생각할 것인가? -> 그 밑의 수로 나눌 수 있을 것인가?
*/
#include <vector>

using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        vector<bool> check(n, true);
        int answer=0;
        for(int i=2; i<n ; i++){
            if(check[i]){
                answer++;
                for(int j=i*2; j<n; j+=i)
                    check[j] = false;//소수가 아닌 것들을 제외시켜준다.
            }
        }//소수인 수의 개수를 적는 함수
        return answer;
    }
};