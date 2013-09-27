#include <stdio.h>

/*Write a function called validate. 
  this function will ask the user for an integer input that must 
  fall between two values (a min and a max) inclusive.  So if min 
  was 2 and max was 5, the value the user enters must be 2, 3,4 or 5.
  If the user enters the wrong value, the function will prompt for a
  new value and repeat until the user enters a proper integer that 
  is in range*/

int validate(int min,int max){
	/*ask for input*/
	int input;
	printf("please enter a number: ");
	scanf("%d",&input);

//	while(!(input >= min && input <=max)){
	while(input < min || input > max){
		/*give an error message*/
		printf("The number must be between %d and %d inclusive",min,max);
		/*ask for input*/
		printf("please enter a number: ");
		scanf("%d",&input);
	}

	/*return the input*/
	return input;
}