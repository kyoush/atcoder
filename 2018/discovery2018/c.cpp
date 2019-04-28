#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, i;
    int ans = 1;
    cin >> n;

    for(i = 0; i < 10; i++){
        ans *= n;
    }
    cout << ans << endl;
    ans *= ans;
    ans = ans % 1000000007;

    cout << ans << endl;
}