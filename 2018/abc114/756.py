n = []
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

i = 0
while i < int(n):
    print(i)
    i = str(i)
    ret = 0
    for j in range(len(i)):
        if int(i[j]) >= 0 and int(i[j]) < 3:
            for k in range(len(i)):
                if k < j:
                    ret += int(i[k]) * pow(10, (len(i) - k - 1))
                else:
                    ret += 3 * pow(10, (len(i) - j - 1))
            i = ret
            break
        elif int(i[j]) > 3 and int(i[j]) < 5:
            for k in range(len(i)):
                if k < j:
                    ret += int(i[k]) * pow(10, (len(i) - k - 1))
                else:
                    ret += 5 * pow(10, (len(i) - j - 1))
            i = ret
            break
        elif int(i[j]) > 5 and int(i[j]) < 7:
            for k in range(len(i)):
                if k < j:
                    ret += int(i[k]) * pow(10, (len(i) - k - 1))
                else:
                    ret += 7 * pow(10, (len(i) - j - 1))
            i = ret
            break
        else:
            i = int(i)
            i += 1
    if jud(i) == 1:
        ans += 1

print('ANS : ' + str(ans))
