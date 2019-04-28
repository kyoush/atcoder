#include <stdio.h>

int main(void){
  int n, t, i, c, ti, min;
  scanf("%d%d\n", &n, &t);

  min = 1001;

  for(i = 0; i < n; i++){
	scanf("%d%d", &c, &ti);
	if(ti <= t && c < min){
	  min = c;
	}
  }

  if(min == 1001){
	printf("TLE\n");
  }else {
	printf("%d\n", min);
  }
   
  return 0;
}
