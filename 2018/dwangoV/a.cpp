#include <bits/stdc++.h>
using namespace std;

int main(void){
    int i, n, ans;
    int tmp = 101;
    float sum = 0;
    cin >> n;
    vector<int> a(n);

    for(i = 0; i < n; i++){
        cin >> a.at(i);
    }

    if(n%2 == 0){
        cout << n/2 << endl;
    }else {
        cout << n/2 << endl;
    }
}