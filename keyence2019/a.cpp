#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n1, n2, n3, n4;
  cin >> n1 >> n2 >> n3 >> n4;
  if(n1 == 1 || n2 == 1 || n3 == 1 || n4 == 1){
	if(n1 == 9 || n2 == 9 || n3 == 9 || n4 == 9){
	  if(n1 == 7 || n2 == 7 || n3 == 7 || n4 == 7){
		if(n1 == 4 || n2 == 4 || n3 == 4 || n4 == 4){
		  cout << "YES" << endl;
		}else {
		  cout << "NO" << endl;
		}
	  }else {
		cout << "NO" << endl;
	  }
	}else {
	  cout << "NO" << endl;
	}
  }else {
	cout << "NO" << endl;
  }
  return 0;
}
