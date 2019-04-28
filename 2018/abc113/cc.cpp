#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n, m, i, j, k, tmp, l, o;
l  //N、Mの入力
  cin >> n >> m;
  vector<int> p(m);
  vector<int> y(m);
  vector< vector<int>> prefe(n, vector<int>(m, 0));
  vector<int> count(n, 0);
  //P、Yの入力
  for(i = 0; i < m; i++){
    cin >> p.at(i) >> y.at(i);
  }
  //Yの値を県番号ごとに分類して２次元配列prefe(県番号 - 1)(年)に格納
  for(i = 0; i < m; i++){
    prefe.at(p.at(i) - 1).at(count.at(p.at(i) - 1)) = y.at(i);
    count.at(p.at(i) - 1) += 1;
  }
  //分類された県ごとのYの値を小さい順にソート
  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      for(k = j; k < m; k++){
        if(prefe.at(i).at(j) > prefe.at(i).at(k) && prefe.at(i).at(j) != 0 && prefe.at(i).at(k) != 0){
          tmp = prefe.at(i).at(j);
          prefe.at(i).at(j) = prefe.at(i).at(k);
          prefe.at(i).at(k) = tmp;
        }
      }
    }
  }
  //ソートされたprefe配列に基づいて0埋めしながらID値を出力
  for(i = 0; i < m; i++){
    for(j = 10, o = 5; j <= 100000; j *= 10, o--){
      if(p.at(i) < j){
        for(l = 0; l < o; l++){
          cout << '0';
        }
        cout << p.at(i);
        break;
      }
    }
    for(k = 0; k < m; k++){
      if(y.at(i) == prefe.at(p.at(i) - 1).at(k)){
        tmp = k + 1;
        break;
      }
    }
    for(j = 10, o = 5; j <= 100000; j *= 10, o--){
      if(tmp < j){
        for(l = 0; l < o; l++){
          cout << '0';
        }
        cout << tmp << endl;
        break;
      }
    }
  }
}
