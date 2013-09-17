#include <stdio.h>

int main(void){
  int v = 579;
  printf("v = %d\n",v);
  printf("%d, %d, %d\n", v%10, (v/10)%10, (v/100));
}

