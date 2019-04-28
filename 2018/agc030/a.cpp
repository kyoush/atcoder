#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a, b, c;
    cin >> a >> b >> c;

    if ( b < c ){
        if( c - b < a){
            cout << b + c << endl;
        }else {
            if( (c - (b + a)) > 0 ){
                cout << 2 * b + a + 1 << endl;
            }else {
                cout << 2 * b + a << endl;
            }
        }
    }else {
        cout << a + c << endl;
    }

    return 0;
}