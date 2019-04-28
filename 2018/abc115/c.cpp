#include <bits/stdc++.h>
using namespace std;

void quick(vector<int> &a, int left, int right){
    int s,t,i,j,m;

    if(left < right){
        m = (left + right)/2;
        t = a[m]; a[m] = a[left]; a[left] = t;
        s = a[left];
        i = left; j = right + 1;
        while(1) {
            while(a[++i] < s);
            while(a[--j] > s);
            if(i >= j) break;
            t = a[i]; a[i] = a[j]; a[j] = t;
        }
        a[left] = a[j]; a[j] = s;

        quick(a, left, j-1);
        quick(a, j+1, right);
    }
}

int main(void){
    int n, k, i;
    cin >> n >> k;
    vector<int> h(n);

    for(i = 0; i < n; i++){
        cin >> h.at(i);
    }

    quick(h, 0, n-1);
    cout << (h.at(k - 1) - h.at(0)) << endl;

    return 0;
}
