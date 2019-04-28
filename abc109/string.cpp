// vectorでのstring型の取り扱い
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<string> a(2);

    int i, j;
    for(i = 0; i < 2; i++) cin >> a.at(i);

    for(i = 0; i < 2; i++) {
        for(j = 0; j < a.at(i).size(); j++) {
            cout << a.at(i).at(j);
        }
        cout << endl;
    }

    cout << endl;
        
    return 0;
}
