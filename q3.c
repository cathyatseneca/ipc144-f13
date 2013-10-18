#include <stdio.h>
int main(void){
	int userInput;
	int i;
	printf("please enter a number between 1 and 12: ");
	scanf("%d",&userInput);
	for(i=0;i<100;i++){
		int total = userInput *(i+1);
		printf("%d * %d = %d\n",userInput,(i+1),total);
	}
	/*alternative
	  for(i=1;i<=100;i++){
	  	int total = userInput * i;
		printf("%d * %d = %d\n",userInput,i,total);	
	  }
	*/
	 /*
	    int multiplier=1;
	 	while(multipler <= 100){
			printf("%d * %d = %d", userInput,multiplier,
								multiper *userInput);
			multiplier=multiplier + 1;
			//multiplier ++;
			//multiplier += 1;
			//don't do: multiplier = multiplier++;			
	 	}
	 */
}
