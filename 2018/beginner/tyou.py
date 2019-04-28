a = []
for i in range(3):
    a.append(int(input()))

x = int(input())

count = 0

for i in range(a[0]+1):
    for j in range(a[1]+1):
        for k in range(a[2]+1):
            if (500*i + 100*j + 50*k) == x:
                count += 1

print(count)
