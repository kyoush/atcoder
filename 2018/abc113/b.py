n = int(input())

t, a = input().strip().split(' ')
t, a = [int(t), int(a)]

h = map(int, input().split())
h = list(h)

min = 1000000
tmp = 1

def ave_tmp(x):
    return (t - x * 0.006)

def diff(ave_tmp):
    if (a - ave_tmp) > 0:
        return (a - ave_tmp)
    else:
        return (ave_tmp - a)

for i in range(len(h)):
    if diff(ave_tmp(h[i])) < min:
        min = diff(ave_tmp(h[i]))
        tmp = i + 1

print(tmp)

