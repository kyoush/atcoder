#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, i, index;
    int max = 0;
    int sum = 0;
    cin >> n;
    vector<int> l(n);
    for (i = 0; i < n; i++) {
        cin >> l.at(i);
        if ( l.at(i) > max) {
            max = l.at(i);
            index = i;
        }
    }

    for ( i = 0; i < n; i++) {
        if (i != index) {
            sum += l.at(i);
        }
    }

    if ( sum > max ) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }

    return 0;
}