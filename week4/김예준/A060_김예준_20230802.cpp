class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum = 0;
        //stack에 하나씩 넣으면서 생각
        stack <int> st;
        for(auto o : operations) {
            //두가지 값을 더해줌
            if(o == "+") {
                int prev = st.top();
                st.pop();
                int prevv = st.top();
                st.push(prev);
                st.push(prev + prevv);
            }
            //제곱해줌
            else if(o == "D") {
                st.push(st.top() * 2);
            }
            //그냥 제거를 해줌
            else if(o == "C") {
                st.pop();
            }
            //숫자로 변환해서 저장
            else {
                st.push(stoi(o));
            }
        }
        //나온 값들을 다 꺼내서 저장
        while(st.size()) {
            sum += st.top();
            st.pop();
        }
            
        return sum;
    }
};