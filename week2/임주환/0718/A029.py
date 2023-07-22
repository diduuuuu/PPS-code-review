n = int(input())
door = int(input())

if n > 5:
    print("Love is open door")
else:
    for i in range(1, n):
        if door == 0:
            door = 1
            print(door)
        else:
            door = 0
            print(door)