#include <bits/stdc++.h>
using namespace std;

int main(void){
    int i, j, k, tmp, ans;
    int R, G, B, N; cin >> R >> G >> B >> N;

    for(i = 0, ans = 0; i * R <= N; i++){
        for(j = 0; (i * R + j * G) <= N; j++){
            if((N - (i * R + j * G)) % B == 0) ans++;
        }
    }   

    cout << ans << endl;

    return 0;
}