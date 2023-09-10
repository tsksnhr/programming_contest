N = int(input())

dic = {'AC':0, 'WA':0, 'TLE':0, 'RE':0}
for i in range(N):
    s = input()
    dic[s] += 1

print("AC x ", dic['AC'])
print("WA x ", dic['WA'])
print("TLE x ", dic['TLE'])
print("RE x ", dic['RE'])