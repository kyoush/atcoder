#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(void)
{
    int n, i;
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    sort(a.begin(), a.end(), greater<int>() );

    cout << "After sort" << endl;
    for (i = 0; i < n; i++) {
        cout << a.at(i);
    }
    cout << endl;

    return 0;
}
