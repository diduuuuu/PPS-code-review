import math

n = int(input())
phone = list(map(int, input().split()))


youngsik = 0
minsik = 0
for i in range(n):
    youngsik += (int(phone[i] / 30) + 1) * 10
    minsik += (int(phone[i] / 60) + 1) * 15

if youngsik < minsik:
    print("Y",  str(youngsik))
elif youngsik > minsik:
    print("M", str(minsik))
else:
    print("Y M", str(minsik))