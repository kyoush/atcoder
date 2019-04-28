#include <bits/stdc++.h>
using namespace std;

int main(void){
    int i, n;
    int ans = 1;
    cin >> n;

    for(i = 0; i < n; i++){
        ans *= 4;
    }

    cout << ans << endl;
}