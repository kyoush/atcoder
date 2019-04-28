#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int i;
  vector<int> a = {1, 2, 3, 4, 5};

  for(i = 0; i < a.size(); i++) cout << a.at(i) << endl;

  cout << *max_element(a.begin(), a.end()) << endl;
  
  return 0;
}
