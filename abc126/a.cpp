#include <bits/stdc++.h>
using namespace std;

int main (void){
    int i, N, K;
    cin >> N >> K;
    K--;
    string S; cin >> S;

    if(S.at(K) == 'A'){
        S.at(K) = 'a';
    }else if(S.at(K) == 'B'){
        S.at(K) = 'b';
    }else {
        S.at(K) = 'c';
    }

    cout << S << endl;

    return 0;
}