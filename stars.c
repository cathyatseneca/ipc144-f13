#include <stdio.h>

/*this program will ask the user for a number and print out
  that many stars (*) */

int main(void){
  int numStars;
  int i;
  printf("Please enter a number of stars: ");
  scanf("%d",&numStars);
  for(i=0;i<numStars;i++){
    printf("*");
  }
  printf("\n");
  return 0;
}
