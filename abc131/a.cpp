#include <bits/stdc++.h>
using namespace std;

int main(void){
    string S; cin >> S;
    int i, flag;

    for (i = 0, flag = 0; i < 3; i++){
        if (S.at(i) == S.at(i + 1)) flag = 1;
    }
    if (flag == 0) {
        cout << "Good" << endl;
    }else {
        cout << "Bad" << endl;
    }

    return 0;
}