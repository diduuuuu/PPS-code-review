class Solution:
    def addDigits(self, num: int) -> int:

        if num < 10:
            answer = num
        while len(str(num)) > 1:
            answer = 0
            for digit in str(num):
                answer += int(digit)
            num = str(answer)

        return answer