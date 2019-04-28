import copy

n, m = input().strip().split(' ')
n, m = [int(n), int(m)]

p = []
y = []

for i in range(m):
    a, b = input().strip().split(' ')
    a, b = [int(a), int(b)]
    p.append(a)
    y.append(b)

z = copy.deepcopy(y)

for i in range(len(z)-1):
    for j in range(i, len(z)-1, 1):
        if z[j] > z[j + 1]:
            tmp = z[j]
            z[j] = z[j + 1]
            z[j + 1] = tmp

min = []
order = []

for i in range(n):
    min.append(0)
    
for i in range(m):
    order.append(0)
    
for i in range(m):
    for j in range(m):
        if z[i] == y[j]:
            min[p[j] - 1] += 1
            order[j] = min[p[j] - 1]

def addzero(a):
    str = ''
    for i in range(6 - len(a)):
        str += '0'
    return str

for i in range(m):
    print(addzero(str(p[i])) + str(p[i]) + addzero(str(order[i])) + str(order[i]))
