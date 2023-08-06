class Solution:
    def isPalindrome(self, s: str) -> bool:

        result = True
        test_str = ""

        for c in s:
            if (c >= "a" and c <= "z") or (c >= "A" and c <= "Z") or (c >= "0" and c <= "9"):
                test_str += c
            
        test_str = list(test_str.lower())
        
        for i in range(int(len(test_str) / 2)):
            if test_str[i] != test_str[len(test_str) - 1 - i]:
                result = False
                break

        return result