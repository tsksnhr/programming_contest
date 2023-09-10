N, M = map(int, input().split())

tp_list = list()
for i in range(N):
    a, b = map(int, input().split())
    tp_list.append((a, b))

tp_list.sort()

cnt = 0
cost = 0
flg = False
for a, b in tp_list:
    for i in range(b):
        cnt += 1
        cost += a

        if cnt == M:
            flg = True
            break
    
    if flg:
        break

print(cost)