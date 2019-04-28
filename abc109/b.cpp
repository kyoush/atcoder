#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, i, j, flag = 0;
    cin >> n;
    vector<string> w(n);
    for(i = 0; i < n; i++) {
        cin >> w.at(i);
        for(j = 0; j < i; j++) {
            if(w.at(i) == w.at(j)) flag = 1;
        }
    }

    for(i = 0; i < n - 1; i++) {
        if( w.at(i).at(w.at(i).size() - 1) != w.at(i + 1).at(0)) {
            flag = 1;
            break;
        }
    }
    if (flag == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
