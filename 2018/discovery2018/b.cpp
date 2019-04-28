#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, ans;
    float i, j;
    cin >> n;
    ans = 0;
    for(i = 0; i < (n/2); i += 1){
        for(j = 0; j < (n/2); j += 1){
            if(j >= (-i + n/2.0)){
                ans++;
            }
        }
    }
    if(n%2 == 1){
        ans = ans*4 + (n/2 - 1)*4 + 1;
    }else {
        ans *= 4;
    }
    if(ans < 0){
        ans = 0;
    }
    cout << ans << endl;
}