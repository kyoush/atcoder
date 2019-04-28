s = []
s = input()
min = 9999999999
for i in range(len(s) - 2):
    a = int(s[i] + s[i+1] + s[i+2])
    if min > abs(753 - a):
        min = abs(753 - a)
    print(min)
print(min)
