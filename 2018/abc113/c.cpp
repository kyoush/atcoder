#include <bits/stdc++.h>
using namespace std;

void show(vector<int> list1, vector<int> list2){
  for(int i = 0; i < 12; i++){
    cout << list1.at(i) << ' ' << list2.at(i) << endl;
  }
}

int main(void){
  int n, m;
  cin >> n >> m;

  vector<int> p(m);
  vector<int> y(m);

  int i;
  for(i = 0; i < m; i++){
    cin >> p.at(i) >> y.at(i);
  }

  int tmp;
  vector<int> z = y;
  int j;

  for(i = 0; i < m; i++){
    for(j = i + 1; j < m; j++){
      if(z.at(i) > z.at(j)){
        tmp = z.at(i);
        z.at(i) = z.at(j);
        z.at(j) = tmp;
      }
    }
  }
    
  vector<int> min(n);
  vector<int> order(m);

  for(i = 0; i < n; i++){
    min.at(i) = 0;
  }
  
  for(i = 0; i < m; i++){
    order.at(i) = 0;
  }

  int l;
  
  for(i = 0; i < m; i++){
    for(j = 0; j < m; j++){
      if(z.at(i) == y.at(j)){
        min.at(p.at(j) - 1) += 1;
        order.at(j) = min.at(p.at(j) - 1);
      }
    }
  }
  
  int k = 5;

  for(i = 0; i < m; i++){
    for(j = 10; j <= 100000; j *= 10, k--){
      if(p.at(i) < j){
        for(l = 0; l <= k; l++){
          cout << '0';
        }
        cout << p.at(i);
        break;
      }
    }
    for(j = 10, k = 5; j <= 100000; j *= 10, k--){
      if(order.at(i) < j){
        for(l = 0; l <= k; l++){
          cout << '0';
        }
        cout << order.at(i) << endl;
        break;
      }
    }
  }

}
