s = input('')

idure = ['dreamer', 'eraser', 'dream', 'erase']

i = 0
t = ''

if(len(s) >= 7):
    while(i < len(s)):
        tmp = ''
        for j in range(i, i+7, 1):
            tmp += s[j]
        i = j + 1
        if(tmp == idure[0]):
            t += idure[0]
        elif(tmp == idure[1]):
            t += idure[1]
        else:
            tmp2 = ''
            for i in range(len(tmp)-1):
                tmp2 += tmp(i)
            tmp = tmp2
            i -= 1
            if(tmp == idure[2]):
                t += idure[2]
            elif(tmp == idure[3]):
                t += idure[3]
            else:
                tmp2 = ''
                for i in range(len(tmp)-1):
                    tmp2 += tmp(i)
                    tmp = tmp2
                i -= 1
                if(tmp == idure[2]):
                    t += idure[2]
                elif(tmp == idure[3]):
                    t += idure[3]
                else:
                    break
        print(i)
        print(len(s))
elif(s == idure[1]):
    t = idure[1]
elif(s == idure[2]):
    t = idure[2]
elif(s == idure[3]):
    t = idure[3]

print(s)
print(t)

if(s == t):
    print('YES')
else:
    print('NO')
