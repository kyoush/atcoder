#include <bits/stdc++.h>
using namespace std;

/************************
 * ナップサック問題による
 * DP(動的計画法)の練習
 ************************/

int main(void)
{
    int n, W, i, j, k, l;
    cin >> n >> W;
    vector<int> v(n);
    vector<int> w(n);
    for (i = 0; i < n; i++) {
        cin >> v.at(i) >> w.at(i);
    }
    
    vector<vector <int>> dp(n + 1, vector<int>(W + 1, 0));

    for (i = 0; i < n; i++) {
        for (j = 0; j <= W; j++) {
            if ( j >= w.at(i) ) dp.at(i + 1).at(j) = max(dp.at(i).at(j - w.at(i)) + v.at(i), dp.at(i).at(j));
            else dp.at(i + 1).at(j) = dp.at(i).at(j);
        }
    }

    // 表示
    for ( k = 0; k <= n; k++) {
        if ( k == 0 ) {
            cout << "   ";
            for ( l = 0; l <= W; l++) {
                cout << right << setw(3) << l;
            }
            cout << endl;
        }
        for ( l = 0; l <= W; l++) {
            if (l == 0) cout << right << setw(3) << k;
            cout << right << setw(3) << dp.at(k).at(l);
        }
        cout << endl;
    }
    
    cout << endl;

    cout << dp.at(n).at(W) << endl;
    
    return 0;
}
