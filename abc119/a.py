s = input()
y = int(s[0:4])
m = int(s[5:7])
d = int(s[9:11])

if y <= 2019 and m <= 4 and d <= 30:
    print('Heisei')
else:
    print('TBD')