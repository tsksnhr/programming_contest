N = int(input())
a_list = list(map(int, input().split()))

a_list.sort()
a_list.reverse()

cnt =0
alice = 0
bob = 0
for a in a_list:
    if cnt%2 == 0:
        alice += a
    else:
        bob += a
    cnt += 1

print(alice-bob)