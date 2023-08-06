class Solution:
    def calPoints(self, operations: List[str]) -> int:
        score = []

        for operation in operations:
            try:
                score.append(int(operation))
            except:
                if operation == "C":
                    del score[len(score) - 1]
                elif operation == "D":
                    score.append(score[len(score) - 1] * 2)
                elif operation == "+":
                    score.append(score[len(score) - 1] + score[len(score) - 2])

        sum = 0
        for i in score:
            sum += i

        return sum
