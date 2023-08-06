class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        answer = []
        for num in range(left, right+1):
            #0이 들어가면 나누어지지 않아짐
            if '0' not in str(num):
                #나누어지는지 확인
                if all(num % int(n) == 0 for n in str(num)):
                    answer.append(num)
        return answer