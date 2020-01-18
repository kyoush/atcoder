#include <bits/stdc++.h>
using namespace std;
int main(void){
    long int k, a, b;
    cin >> k >> a >> b;

    if (k + 1 > a + ((k - (a - 1))/2)*(b - a) + (k - (a - 1)) % 2){
        cout << k + 1 << endl;
    }else {
        cout << a + ((k - (a - 1))/2)*(b - a) + (k - (a - 1)) % 2 << endl;
    }

    return 0;
}