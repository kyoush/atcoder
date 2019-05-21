#include <bits/stdc++.h>
using namespace std;

int main (void){
    long double i, j, k, N, K, ans, prob; cin >> N >> K;

    prob = 1 / N;

    if (N < K) {
        ans = 0;
    }else {
        ans = (K - N) * prob;
    }

    

    cout << ans << endl;

    return 0;
}