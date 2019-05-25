#include <bits/stdc++.h>
using namespace std;

int main(void){
    int ans, tmp, i, j, k, min, max;
    int N, M; cin >> N >> M;

    vector<int> L(M);
    vector<int> R(M);

    for (i = 0; i < M; i++) {
        cin >> L.at(i) >> R.at(i);
    }

    min = *min_element(R.begin(), R.end());
    max = *max_element(L.begin(), L.end());
    if (min - max >= 0) {
        cout << min - max + 1 << endl;
    }else {
        cout << '0' << endl;
    }

    return 0;
}