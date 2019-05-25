#include <bits/stdc++.h>
using namespace std;

int main(void){
    int ans, tmp, i, j, k, min, max;
    int N, M; cin >> N >> M;
    long long sum = 0;

    vector<int> A(N); for (i = 0; i < N; i++) cin >> A.at(i);
    vector<int> B(M);
    vector<int> C(M);
    for (i = 0; i < M; i++){
        cin >> B.at(i) >> C.at(i);
    }

    sort(A.begin(), A.end());

    for (i = 0; i < M; i++){
        for (j = 0; j < B.at(i); j++){
            if(A.at(j) < C.at(i)) A.at(j) = C.at(i);
        }
        sort(A.begin(), A.end());
    }

    for (i = 0; i < N; i++) sum += A.at(i);

    cout << sum << endl;

    return 0;
}