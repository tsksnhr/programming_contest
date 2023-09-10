A, B, C, X = [int(input()) for i in range(4)]

sum = 0
ans = 0

for i in range(A+1):
    for j in range(B+1):
        for k in range(C+1):
            sum = i*500 + j*100 + k*50
            
            if sum == X:
                ans += 1

print(ans)