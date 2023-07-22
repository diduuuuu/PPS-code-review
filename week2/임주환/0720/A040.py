class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
        mid = int(len(s) / 2)
        s1 = s[0:mid]
        s2 = s[mid:len(s)]

        count1 = 0
        count2 = 0
        for c1 in s1:
            for vowel in vowels:
                if c1 == vowel:
                    count1 += 1
                    continue
        for c2 in s2:
            for vowel in vowels:
                if c2 == vowel:
                    count2 += 1
                    continue

        if count1 == count2:
            return True
        else:
            return False