#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, m, i, j, k, a; cin >> n >> m;
    int ans = 0;
    vector<int> food(m + 1);
    for (i = 0; i < m; i++) food.at(i) = 0;

    for (i = 0; i < n; i++) {
        cin >> k;
        for (j = 0; j < k; j++) {
            cin >> a;
            food.at(a - 1) += 1;
        }
    }

    for (i = 0; i < m; i++) {
        if (food.at(i) == n) ans++;
    }

    cout << ans << endl;

    return 0;
}