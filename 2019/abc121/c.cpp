#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long int N, M, i, j, h, tmp, min, ans;
    cin >> N >> M;
    vector<int> A(N);
    vector<int> B(N);
    for (i = 0; i < N; i++) cin >> A.at(i) >> B.at(i);
    vector<vector <int> > dp(accumulate(B.begin(), B.end()), vector<int>(2));

    for (i = 0; i < M; i++) dp.at(0).at(i) = 0;
  
    for (i = 0; i <= N; i++) {
        min = min_elememt(a.at(i).begin(), a.at(i).end());
        for (j = 0; j < B.at(i) ; j++) {
            if () 
        }
    }

        return 0;
}