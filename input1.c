/*This program will read in a number and print it*/
#include <stdio.h>
int main(void){
  int userInput;
  printf("Please enter a number: ");

  /* read in the user input*/
  scanf("%d",&userInput);

  printf("You entered: %d\n",userInput);
  return 0;
}
