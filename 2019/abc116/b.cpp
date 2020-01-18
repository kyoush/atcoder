#include <bits/stdc++.h>
using namespace std;

int func(int){
  
}

int main(void){
  int i, j;
  bool flag = false;
  vector<int> a(1000000);

  cin >> a.at(0);

  for(i = 1; flag == false; i++){
		if((i + 1)%2 == 0){
			a.at(i) = (i + 1)/2;
		}else {
			a.at(i) = 3 * (i + 1) + 1;
		}
		for(j = i - 1; j >= 0; j--){
			if(a.at(j) == a.at(i)){
				cout << a.at(j) << endl;
				cout << a.at(i) << endl;
				cout << j << endl << endl;
				flag = true;
				break;
			}
		}
  }
	for( i = 0; i < 8; i++){
		cout << a.at(i) << ' ';
	}

  cout << i + 1 << endl;
  
  return 0;
}
