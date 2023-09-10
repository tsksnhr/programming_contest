N, A, B = map(int, input().split())

ans = 0

for i in range(N+1):
    digit_sum = 0
    buf = i
    while buf != 0:
        mod = buf%10
        digit_sum += mod
        buf = buf//10

    if digit_sum >= A and digit_sum <= B:
#        print("digit_sum = {}, i = {}".format(digit_sum, i))
        ans += i

print(ans)