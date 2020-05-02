#include <bits/stdc++.h>
using namespace std;

int main(void){
    int k, a, b;
    int x;
    cin >> k;
    cin >> a >> b;
    x = b / k;
    if (x * k >= a) {
        cout << "OK" << endl;
    }else {
        cout << "NG" << endl;
    }

    return 0;
}