N = int(input())
A = list(map(int, input().split()))
X = int(input())

diff_set = set([a - X for a in A])

for a in A:
	if a in diff_set:
		print("Yes")
print("No")
