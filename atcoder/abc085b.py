N = int(input())
d_list = [int(input()) for i in range(N)]

d_set = set(d_list)
cnt = len(d_set)

print(cnt)