class Solution {
public:
    int countVowels(string str) {
    int count = 0;
    for (char ch : str) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
    }

        bool halvesAreAlike(string s) {
    int mid = s.length() / 2;
    string a = s.substr(0, mid);
    string b = s.substr(mid);

    int countA = countVowels(a);
    int countB = countVowels(b);

    return countA == countB;
    }
};