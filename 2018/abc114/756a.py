n = input()
ans = 0
def jud(i):
    i = str(i)
    thr = 0
    fiv = 0
    sev = 0
    for j in range(len(i)):
        if i[j] == '3':
            thr += 1
        elif i[j] == '5':
            fiv += 1
        elif i[j] == '7':
            sev += 1
        else:
            return 'errrrrror'
    if thr >= 1 and fiv >= 1 and sev >= 1:
        return 1
    else:
        return 0

def jud2(i):
    i = str(i)
    thr = 0
    fiv = 0
    sev = 0
    for j in range(len(i)):
        if i[j] == '0':
            thr += 1
        elif i[j] == '1':
            fiv += 1
        elif i[j] == '2':
            sev += 1
        else:
            return 'errrrrror'
    if thr >= 1 and fiv >= 1 and sev >= 1:
        return 1
    else:
        return 0

for i in range(int(n), 0, -1):
    if jud(i) == 1:
        num = ''
        i = str(i)
        for j in range(len(i)):
            if i[j] == '3':
                num += '0'
            elif i[j] == '5':
                num += '1'
            else:
                num += '2'
        break

def nsin(X,n):
    if(int(X/n)):
        return nsin(int(X/n), n) + str(X%n)
    return str(X%n)

def base10(i):
    i = str(i)
    ret = 0
    for j in range(len(i)):
        ret += int(i[j]) * pow(3, (len(i) - j - 1))
    return ret + 1

ans = 0
if base10(num) >= 4:
    for j in range(len(num), 2, -1):
        for i in range(base10(num) + 1, 4, -1):
            if jud2(nsin(i, 3).zfill(j)) == 1:
                ans += 1

print(ans)