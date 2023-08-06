class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        columnNumber -= 1
        result = ''

        while True:
            if result == '':
                result = chr(ord('A') + columnNumber % 26)
            else:
                result = chr(ord('A') + columnNumber % 26) + result
            if int(columnNumber / 26) > 0:
                columnNumber = int(columnNumber / 26) - 1
            else:
                break

        return result