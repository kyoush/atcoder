#include <bits/stdc++.h>
using namespace std;

int main(void){
  vector<vector<int>> prefe(5, vector<int>(5, 0));

  for(int i = 0; i < 5; i++){
	for(int j = 0; j < 5; j++){
	  prefe.at(i).at(j) = i * j;
	}
  }

  for(int i = 0; i < 5; i++){
	for(int j = 0; j < 5; j++){
	  cout << prefe.at(i).at(j) << ' ';
	}
	cout << endl;
  }
  
}
