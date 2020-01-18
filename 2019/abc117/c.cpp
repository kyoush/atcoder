#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
// 解説聞いた後にコーディングした

int main(void){
    int n, m, i, j;
    cin >> n >> m;
    vector<int> x(m), diff(m - 1);
    
    for (i = 0; i < m; i++) cin >> x.at(i);
    sort(x.begin(), x.end());

    for (i = 0; i < (m - 1); i++) diff.at(i) = (x.at(i + 1) - x.at(i));
    sort(diff.begin(), diff.end(), greater<int>() );

    for (i = 0; i < n - 1 && i < diff.size(); i++) diff.at(i) = 0;
    cout << accumulate(diff.begin(), diff.end(), 0) << endl;
        
    return 0;
}
