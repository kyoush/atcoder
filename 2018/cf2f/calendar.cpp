#include <bits/stdc++.h>
using namespace std;

int main(void){
    vector<string> week{"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    int i, n;
    cin >> n;

    vector<string> input(n);

    for(i = 0; i < n; i++){
        cin >> input.at(i);
    }

    for(i = 0; i < n; i++){
        if(input.at(i) == "Mon"){
            cout << "Tue" << endl;
        }else if(input.at(i) == "Tue"){
            cout << "Wed" << endl;
        }else if(input.at(i) == "Wed"){
            cout << "Thu" << endl;
        }else if(input.at(i) == "Thu"){
            cout << "Fri" << endl;
        }else if(input.at(i) == "Fri"){
            cout << "Sat" << endl;
        }else if(input.at(i) == "Sat"){
            cout << "Sun" << endl;
        }else {
            cout << "Mon" << endl;
        }
    }
}