#include <bits/stdc++.h>
using namespace std;

int main(void){
    string str;
    cin >> str;
    int count, i;

    for(i = 0, count = 0; i < 4; i++){
        if(str[i] == '2'){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}