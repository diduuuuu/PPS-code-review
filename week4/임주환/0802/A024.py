class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        five = 0
        ten = 0
        twenty = 0

        for bill in bills:
            if bill == 5:
                five += 1
            elif bill == 10:
                ten += 1
            elif bill == 20:
                twenty += 1

            bill -= 5

            while bill > 0:
                if bill >= 20:
                    if twenty > 0:
                        twenty -= 1
                        bill -= 20
                    elif ten > 0:
                        ten -= 1
                        bill -= 10
                    elif five > 0:
                        five -= 1
                        bill -= 5
                    else:
                        return False
                elif bill >= 10:
                    if ten > 0:
                        ten -= 1
                        bill -= 10
                    elif five > 0:
                        five -= 1
                        bill -= 5
                    else:
                        return False
                elif bill >= 1:
                    if five > 0:
                        five -= 1
                        bill -= 5
                    else:
                        return False
        return True