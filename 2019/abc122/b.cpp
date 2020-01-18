#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string S; cin >> S;
    int i, cnt, max = 0;

    for (i = 0, cnt = 0; i < S.size(); i++) {
        if(S.at(i) == 'A' || S.at(i) == 'T' || S.at(i) == 'C' || S.at(i) == 'G') {
            cnt++;
            if (cnt > max) {
                max = cnt;
            }
        }else {
            cnt = 0;
        }
    }

    cout << max << endl;

    return 0;
}
