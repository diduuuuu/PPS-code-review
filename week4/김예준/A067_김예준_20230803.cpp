class Solution {
public:
    string removeDuplicates(string S) {
    int nRemoved = 0; //제거를 했는지 확인
        
        do{
            nRemoved = 0;
            //겹치는 부분을 제거
            for(int i = 0; i < S.size() - 1;){
                if(S[i] == S[i+1]){
                    S.erase(i, 2);
                    i--;
                    nRemoved++;
                }else{
                    i++;
                }
            }
        }while(nRemoved > 0 && S.size() > 0);
        
        return S;
    }
};