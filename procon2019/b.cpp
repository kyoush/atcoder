#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int i, j;
    vector<int> a(6);
    vector<int> c(4);
    int count2 = 0;

    for(i = 0; i < 4; i++) c.at(i) = 0;

    for (i = 0; i < 6; i++) {
        cin >> a.at(i);
        for (j = 1; j < 5; j++) {
            if (a.at(i) == j){
                c.at(j - 1) += 1;
                break;
            }
        }
    }

    for (i = 0; i < 4; i++) {
        if (c.at(i) == 2) count2++;
    }
    
    if (count2 == 2){
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }

    return 0;
}