#include <stdio.h>

int main(void){
  int a[1000];
  int i = 0;
  
  while(1){
	scanf("%d", &a[i]);
	if(a[i] == "\n")
	  break;
	i++;
  }

  return 0;
}
