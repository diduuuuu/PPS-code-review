class Serial:
    def __init__(self):
        self.serial = ""
        self.length = 0
        self.sum = 0

    def setSerial(self, s:str):
        self.serial = s
        self.length = len(s)
        for c in s:
            if c >= "0" and c <= "9":
                self.sum += int(c)

    def __lt__(self, other):
        if self.length != other.length:
            return self.length < other.length
        elif self.sum != other.sum:
            return self.sum < other.sum
        else:
            return self.serial < other.serial

n = int(input())

serials = []
for i in range(n):
    tmp = input()
    serial = Serial()
    serial.setSerial(tmp)
    serials.append(serial)

serials.sort()

for serial in serials:
    print(serial.serial)