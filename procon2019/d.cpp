//コンテスト終了後、解説聞きながら
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long l, i, j, k, tmp;
    cin >> l;
    vector<long> a(l);
    for (i = 0; i < l; i++) {
        cin >> a.at(i);
    }
    vector<vector <long> > dp(l + 1, vector<long>(5, 0));

    for (i = 0; i < l; i++) {
        for (j = 0; j <= 4; j++) {
            tmp = dp.at(i).at(0);
            for (k = 1; k <= j; k++) {
                if (dp.at(i).at(k) < tmp) tmp = dp.at(i).at(k);
            }
            
            if (j == 0 || j == 4) {
                dp.at(i + 1).at(j) = tmp + a.at(i);
            }else if (j == 1 || j == 3) {
                if (a.at(i) < 1) {
                    dp.at(i + 1).at(j) = tmp + 2;
                }else if(a.at(i) % 2 == 0) {
                    dp.at(i + 1).at(j) = tmp;
                }else {
                    dp.at(i + 1).at(j) = tmp + 1;
                }
            }else if (j == 2) {
                if(a.at(i)%2 == 0) {
                    dp.at(i + 1).at(j) = tmp + 1;
                }else {
                    dp.at(i + 1).at(j) = tmp;
                }
            }
        }
    }
    cout << *min_element(dp.at(l).begin(), dp.at(l).end()) << endl;

    return 0;
}
