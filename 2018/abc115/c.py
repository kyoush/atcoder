n, k = map(int, input().split())
h = [int(input()) for i in range(n)]
h.sort()

min = h[k - 1] - h[0]
for i in range(1, n - k + 1):
    if min > h[i + k - 1] - h[i]:
        min = h[i + k - 1] - h[i]

print(min)
