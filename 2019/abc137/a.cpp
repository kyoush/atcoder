#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int A, B; cin >> A >> B;
    int max = -999999;

    if (A + B > max){
        max = A + B;
    }
    if (A - B > max){
        max = A - B;
    }
    if (A * B > max){
        max = A * B;
    }

    cout << max << endl;

    return 0;
}