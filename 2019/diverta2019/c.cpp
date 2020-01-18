#include <bits/stdc++.h>
using namespace std;

int main(void){
    int i, j, k, N, tmp, ans; cin >> N;
    vector<string> s(N);
    vector<int> index(N);

    for(i = 0; i < N; i++) cin >> s.at(i);

    for(i = 0; i < N; i++){
        if(s.at(i).at(0) == 'A' && s.at(i).at(s.at(i).size() - 1) == 'A'){ //'A' - 'A': index = 1
            index.at(i) = 1;
        }else if(s.at(i).at(0) == 'A' && s.at(i).at(s.at(i).size() - 1) == 'B'){ //'A' - 'B': index = 2
            index.at(i) = 2;
        }else if(s.at(i).at(0) == 'B' && s.at(i).at(s.at(i).size() - 1) == 'A')
    }


    return 0;
}