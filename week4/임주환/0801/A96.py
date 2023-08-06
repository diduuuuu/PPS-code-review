class Solution:
    def hammingWeight(self, n: int) -> int:
        one = bin(n)
        one = one.replace("b", "")
        one = one.replace("0", "")
        return len(one)