#include <bits/stdc++.h>
using namespace std;

int main(void){
    int i, n, m;
    cin >> n >> m; 
    vector<int> a(m);
    vector<int> b(m);
    vector<int> l(m);

    for(i = 0;i < m; i++){
        cin >> a.at(i) >> b.at(i) >> l.at(i);
    }

    int count = 0;
    int j;
    for(i = 0; i < m-1; i++){
        for(j = i; j < m; j++){
            if(b.at(i) == a.at(j)){
                if(b.at(i) < a.at(j)){
                    if(l.at(i) + l.at(j) == 2540){ 
                    count++;
                    }
                }
            }
        }
    }

    cout << count << endl;
}