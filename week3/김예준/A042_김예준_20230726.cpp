class Solution {
public:
   bool backspaceCompare(string s, string t) {
    stack<char> stackS, stackT;

    auto processString = [&](const string& str, stack<char>& stack) {
        for (char ch : str) {
            if (ch == '#') {
                if (!stack.empty()) {
                    stack.pop(); 
                }
            } else {
                stack.push(ch); 
            }
        }
    };

    processString(s, stackS);
    processString(t, stackT);

    return stackS == stackT;
    }

};