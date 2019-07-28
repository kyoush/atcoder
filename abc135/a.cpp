#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int A, B, K; cin >> A >> B;
    if (abs(A + B) % 2 == 0) {
        cout << abs(A + B)/2 << endl; 
    }else {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}