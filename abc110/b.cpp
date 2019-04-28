#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, m, i, tmp, maxx, miny;
    cin >> n >> m >> maxx >> miny;
    for(i = 0; i < n; i++) {
        cin >> tmp;
        if (maxx < tmp) maxx = tmp;
    }
    for(i = 0; i < m; i++) {
        cin >> tmp;
        if (miny > tmp) miny = tmp;
    }

    if (maxx < miny) cout << "No War" << endl;
    else cout << "War" << endl;

    return 0;
}
