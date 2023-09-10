data = [input() for i in range(8)]

ref = ''
for i in range(8):
    ref = ref + '.'

ans = ''
al = 0
num = 0
for row in data:
    if row == ref:
        num = num + 1
    else:
        ans = str(8-num)
        for c in row:
            if c == ref[al]:
                al = al + 1
            else:
                ans = chr(al + ord('a')) + ans

print(ans)
