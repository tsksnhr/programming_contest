N = int(input())
a_list = list(map(int, input().split()))

ans = 1e9
for a in a_list:
    buf = 0
    while a%2 == 0:
        a /= 2
        buf += 1
    ans = min(ans, buf)

print(ans)