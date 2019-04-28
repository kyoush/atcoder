#include <stdio.h>
int main(void){
  int i, n;
  scanf("%d", &n);
  i = (n/100)*111;
  
  if( n <= i){
	printf("%d", i);
  }else {
	printf("%d", i + 111);
  }
  return 0;
}
