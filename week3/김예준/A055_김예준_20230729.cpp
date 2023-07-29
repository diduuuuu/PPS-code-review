class Solution {
public:
    string removeOuterParentheses(string s) {
    string result = "";
    stack<int> stk;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            if (!stk.empty()) {
                result += s[i]; // Append inner '(' to the result
            }
            stk.push(i); // Store the starting index of the primitive string
        } else {
            stk.pop(); // Remove the corresponding starting index from the stack
            if (!stk.empty()) {
                result += s[i]; // Append inner ')' to the result
            }
        }
    }

    return result;
    }
};