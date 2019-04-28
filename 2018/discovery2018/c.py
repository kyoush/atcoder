@banboooo044さんのこたえ
N =  int(input())
mod = 1000000007 
ans = 0

for i in range(1,N+1):
    ans += (pow(i,10,mod)  - (pow(i-1,10,mod)))  * pow((N//i),10,mod)% mod

print(ans % mod)