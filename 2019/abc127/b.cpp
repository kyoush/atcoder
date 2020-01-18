#include <bits/stdc++.h>
using namespace std;

int main(void){
    int r, D, tmp, i, j, k; cin >> r >> D >> tmp;
    for(i = 1; i <= 10; i++){
        tmp = r * tmp - D;
        cout << tmp << endl;
    }

    return 0;
}