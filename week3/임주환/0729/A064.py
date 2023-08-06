class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        expected = copy.deepcopy(heights)
        expected.sort()
        output = 0

        for i in range(len(heights)):
            if heights[i] != expected[i]:
                output += 1

        return output
