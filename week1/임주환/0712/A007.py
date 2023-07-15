music_asc = list(map(int, input().split()))

music = music_asc.copy()
music_asc.sort()
music_desc = music_asc.copy()
music_desc.reverse()

if music == music_asc:
    print("ascending")
elif music == music_desc:
    print("descending")
else:
    print("mixed")