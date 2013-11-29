/*
This program will sum the values entered by a user.  The program 
will use a non-positive value to indicate that it is done.  That is if the 
user enters a positive value, the program adds it to the sum.  If the user 
enters a non-positive value (0 or less) it terminates the program. At 
the end the program prints the sum of the values entered
*/




int main(void){
  int input;
  int total=0;
  printf("Enter a number (non-positive to exit): ");
  scanf("%d",&input);
  while(input > 0){
    total=total+input;
    printf("Enter a number (non-positive to exit): ");
    scanf("%d",&input);
  }
  printf("Sum is %d\n",total);

  return 0;
}

/*do while version: Not as good because there are now two checks on the
  same thing*/
/*
int main(void){
  int input;
  int total=0;
  do{
    printf("Enter a number (non-positive to exit): ");
    scanf("%d",&input);
    if(input >0){
      total=total+input;
    }
  }while(input > 0);
  printf("Sum is %d\n",total);

  return 0;
}

*/
