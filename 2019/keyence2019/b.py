str = input()
key = 'keyence'

flag = 0

for i in range(len(str)):
    if str[i] != key[i]:
        break
    
if i > 7:
    flag = 1

j = i

while(j <= len(str)):
    for j in range(j, len(str)):
        if str[j] == key[i]:
            break
    
        for k in range(len(str) - j):
            if str[j + k] != key[i]:
                break
            i += 1

if i == 7 or flag == 1:
    print('YES')
else :
    print('NO')
