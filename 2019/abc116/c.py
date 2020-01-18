n = input()
h = map(int, input().split())
h = list(h)
count = 0
while(max(h) != 0):
    for i in range(len(h) - 1):
        if h[i] == 0 and h[i + 1] != 0:
            j = i
    j += 1
    while(h[j] != 0):
        
        