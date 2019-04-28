#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int N, M, C, i, j, tmp, ans = 0; cin >> N >> M >> C;
  vector<int> B(M); for(i = 0; i < M; i++) cin >> B.at(i);
  vector<vector <int> > A(N, vector<int>(M));
  for (i = 0; i < N; i++) {
	for (j = 0; j < M; j++) {
	  cin >> A.at(i).at(j);
	}
  }

  for (i = 0; i < N; i++) {
	for (j = 0, tmp = 0; j < M; j++) {
	  tmp += A.at(i).at(j) * B.at(j);
	}
	if (tmp + C > 0) ans++;
  }

  cout << ans << endl;

  return 0;
}
