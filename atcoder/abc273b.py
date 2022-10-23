import math

X, K = map(int, input().split())

ans = X
for i in range(1, K+1):
	dif = ans/pow(10, i) - int(ans/pow(10, i))
	if dif >= 0.5:
		buf = math.ceil(ans/pow(10, i))
	else:
		buf = int(ans/pow(10, i))
	ans = buf*pow(10, i)
	# print("{}\t{}".format(i, ans))

print(ans)