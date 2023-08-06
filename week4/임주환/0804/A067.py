class Solution:
    def removeDuplicates(self, s: str) -> str:
        i = 1
        while True:
            try:
                if s[i] == s[i - 1]:
                    s = s[:i - 1] + s[i + 1:]
                    if i == 1:
                        i -= 1
                    else:
                        i -= 2
                i += 1
            except:
                break
        
        return s