class Solution:
    def dayOfYear(self, date: str) -> int:
        year = date[0:4]
        month = date[5:7]
        day = date[8:10]
        result = 0

        if int(month) > 1:
            result += 31
        if int(month) > 2:
            if int(year) % 4 != 0 or (int(year) % 100 == 0 and int(year) % 400 != 0):
                result += 28
            else:
                result += 29
        if int(month) > 3:
            result += 31
        if int(month) > 4:
            result += 30
        if int(month) > 5:
            result += 31
        if int(month) > 6:
            result += 30
        if int(month) > 7:
            result += 31
        if int(month) > 8:
            result += 31
        if int(month) > 9:
            result += 30
        if int(month) > 10:
            result += 31
        if int(month) > 11:
            result += 30
        
        result += int(day)
        return result