#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N, i, j, ans, tmp; cin >> N;
    vector<int> C(N); for (i = 0; i < N; i++) cin >> C.at(i);
    ans = 1;
    tmp = 0;

    for(i = 0; i < N - 1; i++) if (C.at(i) == C.at(i + 1)) tmp++;

    for (i = 0; i < N - 2; i++) {
        for (j = i + 2; j < N; j++){
            if (C.at(i) == C.at(j)) ans++;
        }
    }

    cout << (ans - tmp)%1000000007 << endl;
    return 0;
}