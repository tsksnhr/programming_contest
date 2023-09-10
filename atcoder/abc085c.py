N, Y = map(int, input().split())

flg = False
for i in range(N+1):
    if flg:
        break

    for j in range(N+1-i):
        k = N - (i + j)

        if (i*10000 + j*5000 + k*1000) == Y:
            print(i, j, k)
            flg = True
            break

if flg == False:
    print("{} {} {}".format(-1, -1, -1))