#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N;
  cin >> N;

  vector<int> score(N);

  for(int i = 0; i < N; i++){
	cin >> score.at(i);
  }

  int sum = 0;
  for(int i = 0; i < N; i++){
	sum += score.at(i);
  }
  int mean = sum/N;

  for(int i = 0; i < N; i++){
	if(mean > score.at(i)){
	  cout << mean - score.at(i) << endl;
	}else {
	  cout << score.at(i) - mean << endl;
	}
  }
}
