#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, i, max, index, ans;
	cin >> n;
    vector<int> p(n);

    for(i = 0; i < n; i++){
        cin >> p.at(i);
    }

    max = 99;
    ans = 0;
    for(i = 0; i < n; i++){
        ans += p.at(i);
	    if(p.at(i) > max){
		max = p.at(i);
        }
    }

    cout << (ans - max/2) << endl;
}
