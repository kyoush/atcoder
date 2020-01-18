#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, i;
    double ans = 0;
    cin >> n;
    vector<double> x(n);
    vector<string> u(n);

    for (i = 0; i < n; i++) {
        cin >> x.at(i) >> u.at(i);
    }

    for (i = 0; i < n; i++) {
        if (u.at(i) == "JPY") ans += x.at(i);
        else ans += x.at(i) * 380000;
    }

    cout << ans << endl;

    return 0;
}