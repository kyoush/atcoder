#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    cin >> s;

    long int i;
    long int count, n_whi, ans, cnt_whi;

    for(i = 0, n_whi = 0; i < s.length(); i++){
        if(s[i] == 'W'){
            n_whi++;
        }
    }

    count = 0;
    ans = 0;
    cnt_whi = 0;
    for(i = 0; cnt_whi != n_whi; i++){
        if(s[i] == 'B'){
            count++;
        }else {
            ans += i - cnt_whi;
            cnt_whi++;
            count = cnt_whi;
        }
    }

    cout << ans << endl;
    return 0;
}