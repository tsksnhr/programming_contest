# read in the integer value
n = int(input())
s = input()

ref_A = ''
ref_B = ''
for i in range(n):
    if i%2 == 0:
        ref_A = ref_A + 'M'
        ref_B = ref_B + 'F'
    else:
        ref_A = ref_A + 'F'
        ref_B = ref_B + 'M'
        
if ref_A == s or ref_B == s:
    print('Yes')
else:
    print('No')
    