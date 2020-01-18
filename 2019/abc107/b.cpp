#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int h, w; cin >> h >> w;
  vector< vector <int> > a(h, vector<int>(w, 0));
  vector<int> col(h);
  vector<int> row(w);

  cout << h << w;

  int i, j;
  for (i = 0; i < h; i++) {
	col.at(i) = 0;
	for (j = 0; j < w; j++) {
	  cin >> a.at(i).at(j);
	}
  }
  for (i = 0; i < w; i++) row.at(i) = 0;

  int flag;
  for (i = 0; i < h; i++) {
	flag = 0;
	for (j = 1; j < w; j++) if (a.at(i).at(j) != a.at(i).at(j - 1)) flag = 1;
	if (flag == 1) col.at(i) = 1;
  }
  for (i = 0; i < w; i++) {
	flag = 0;
	for (j = 1; j < h; j++) if (a.at(j).at(i) != a.at(j - 1).at(i)) flag = 1;
	if (flag == 1) row.at(i) = 1;
  }

  for(i = 0; i < h; i++) {
	for(j = 0; j < w; j++) {
	  if (col.at(i) == 0 && row.at(j) == 0) cout << a.at(i).at(j);
	}
	cout << endl;
  }

  return 0;
}
