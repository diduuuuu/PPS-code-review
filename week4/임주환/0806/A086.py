import sys

class Number:
    def __init__(self):
        self.num = 0
        self.en_num = ""
    
    def setdata(self, x:int):
        self.num = x
        x = list(str(x))
        
        for c in x:
            if c == "0":
                self.en_num += " zero"
            elif c == "1":
                self.en_num += " one"
            elif c == "2":
                self.en_num += " two"
            elif c == "3":
                self.en_num += " three"
            elif c == "4":
                self.en_num += " four"
            elif c == "5":
                self.en_num += " five"
            elif c == "6":
                self.en_num += " six"
            elif c == "7":
                self.en_num += " seven"
            elif c == "8":
                self.en_num += " eight"
            elif c == "9":
                self.en_num += " nine"
    
    def __lt__(self, other):
        return self.en_num < other.en_num
    
n = sys.stdin.readline().split()
n, m = int(n[0]), int(n[1])

numbers = []
for i in range(n, m + 1):
    number = Number()
    number.setdata(i)
    numbers.append(number)

numbers.sort()

for i in range(len(numbers)):
    if i != 0 and i % 10 == 0:
        print()
    print(numbers[i].num, end="")
    if i != len(numbers):
        print(" ", end="")
print()