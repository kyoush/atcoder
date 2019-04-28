#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, k;
    cin >> n >> k;

    if ((n / 2.0 + 1 ) > k) { //解説では k <= (n + 1)/2
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }

    return 0;
}
