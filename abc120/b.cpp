#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b, k, i, cnt = 0; cin >> a >> b >> k;
    if (a < b) swap(a, b);

    for (i = b; cnt < k; i--) if (a%i == 0 && b%i == 0) cnt++;

    cout << i + 1 << endl;

    return 0;
}
