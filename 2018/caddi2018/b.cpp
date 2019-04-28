#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0)
        return 0;
    
    return  gcd(b, a%b);
}

int main(void){
    int n, h, w;
    cin >> n >> h >> w;
    vector<int> a(n);
    vector<int> b(n);
    int i, ans;

    for(i = 0, ans = 0;i < n; i++){
        cin >> a.at(i) >> b.at(i);
        if(a.at(i) >= h && b.at(i) >= w){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}