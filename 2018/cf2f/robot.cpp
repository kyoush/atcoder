#include <bits/stdc++.h>
using namespace std;

int abs(int a){
    if(a > 0){
        return a;
    }else {
        return -a;
    }
}

int main(void){
    string s;
    cin >> s;
    int gx, gy;
    cin >> gx >> gy;

    int W, X, Y, Z, i;
    W = 0;
    X = 0;
    Y = 0;
    Z = 0;

    for(i = 0; i < s.size() ; i++){
        if(s[i] == 'W'){
            W++;
        }else if(s[i] == 'X'){
            X++;
        }else if(s[i] == 'Y'){
            Y++;
        }else {
            Z++;
        }
    }

    if(W >= abs(gx) && X >= abs(gy)){
        cout << "Yes" << endl;
    }else if(W >= abs(gy) && X >= abs(gx)){
        cout << "Yes" << endl;
    }else if(W >= abs(gy) && Y >= abs(gx)){
        cout << "Yes" << endl;
    }else if(W >= abs(gx) && Y >= abs(gy)){
        cout << "Yes" << endl;
    }else if(W >= abs(gx) && Z >= abs(gy)){
        cout << "Yes" << endl;
    }else if(W >= abs(gy) && Z >= abs(gx)){
        cout << "Yes" << endl;
    }else if(Y >= abs(gx) && Z >= abs(gy)){
        cout << "Yes" << endl;
    }else if(Y >= abs(gy) && Z >= abs(gx)){
        cout << "Yes" << endl;
    }else if(X >= abs(gx) && Z >= abs(gy)){
        cout << "Yes" << endl;
    }else if(X >= abs(gy) && Z >= abs(gx)){
        cout << "Yes" << endl;
    }else if(X >= abs(gx) && Y >= abs(gy)){
        cout << "Yes" << endl;
    }else if(X >= abs(gy) && Y >= abs(gx)){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }

}
