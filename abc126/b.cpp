#include <bits/stdc++.h>
using namespace std;

int main (void){
    int i, j, k;
    string S, tmp1, tmp2, ans; cin >> S;
    tmp1 = "00";
    tmp2 = "00";

    for(i = 0; i < 2; i++){
        tmp1.at(i) = S.at(i);
        tmp2.at(i) = S.at(i+2);
    }
    
    j = atoi(tmp1.c_str());
    k = atoi(tmp2.c_str());

    if(k > 12 && j >=1 && j <= 12) {
        ans = "MMYY";
    }else if(k >= 1 && k <= 12 && j > 12) {
        ans = "YYMM";
    }else if(k >= 1 && k <= 12 && j >= 1 && j <= 12) {
        ans = "AMBIGUOUS";
    }else {
        ans = "NA"
    }


    cout << ans << endl;

    return 0;
}