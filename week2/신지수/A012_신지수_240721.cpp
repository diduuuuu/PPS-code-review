class Solution {
public:
    int countPrimes(int n) {
        int num = 0;

        for (int i=2; i<n; i++){
           for(int j=2; j<=i; j++){
               if(j!=i){
                   if(i%j == 0)
                        break;
               }
           }
           num++;
        }

        return num;
    }
};