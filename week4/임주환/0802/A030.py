n, feel = map(int, input().split())

gg, gb, bg, bb = map(float, input().split())

good_list = []
bad_list = []

for i in range(n):
    if i == 0:
        prev_good = (1 - feel)
        prev_bad = feel
    
    good = prev_good * gg + prev_bad * bg
    bad = prev_good * gb + prev_bad * bb

    good_list.append(good)
    bad_list.append(bad)
    prev_good = good
    prev_bad = bad

print(int(good_list[n - 1] * 1000))
print(int(bad_list[n - 1] * 1000))