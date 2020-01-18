flag = False
a = []
s = input()
a.append(int(s))

def func(n):
    if n % 2 == 0:
        return n/2
    else :
        return n * 3 + 1

i = 0
while(flag == False):
    a.append(func(a[i]))
    for j in range(i - 1, -1, -1):
        if a[j] == a[i]:
            flag = True
            ans = i
            break
    i += 1

print(i)
