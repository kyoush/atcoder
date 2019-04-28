 #include <stdio.h>

int main(void){
  int i, j, k;
  int x[3];
  scanf("%d", &i);

  x[0] = i / 100;
  x[1] = i / 10 - x[0] * 10;
  x[2] = i - x[0] * 100 - x[1] * 10;

  for(i = 0; i <= 2; i++){
	if(x[i] == 1){
	  x[i] = 9;
	}else {
	  x[i] = 1;
	}
  }

  printf("%d\n", x[0]*100 + x[1]*10 + x[2]);
  return 0;
}
