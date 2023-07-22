class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        result = []
        for i in range(left, right + 1):
            flag = True

            a = i
            while a > 0:
                num = a % 10

                if num == 0 or i % num != 0:
                    flag = False
                    break
                
                a = int(a / 10)
            
            if flag == True:
                result.append(i)

        return result

