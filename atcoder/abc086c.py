N = int(input())

t = [0]*N
a = [0]*N
b = [0]*N

for i in range(N):
    t[i], a[i], b[i] = map(int, input().split())

flg = True
cost = a[0]+b[0]
if (cost > t[0]) or ((cost-t[0])%2 != 0):
    flg = False

if flg:
    for i in range(1, N):
        cost = abs(a[i]-a[i-1]) + abs(b[i]-b[i-1])
        t_dif = t[i]-t[i-1]

        if (cost > t_dif) or ((cost-t_dif)%2 != 0):
            flg = False
            break

if flg:
    print("Yes")
else:
    print("No")        
