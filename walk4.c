#include <stdio.h>
int main(void){
  int v = 15;
  /*Trick question, = is assignment not equivalence
    and this expression evaluates always to 5.
    5 is not 0 so it is always true*/
  if( v = 5){
    printf("got here!\n");
  }
  printf("%d\n",v);
  printf("the end!\n");
}

