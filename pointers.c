/*write a function called separate that will take
  a floating point value and return an integer. The
  number is a monetary value (2 decimal places).
  Function returns the number of cents
  example: if number is 5.56, function returns 56

  */
void separate(float number,int* dollar,int* cent){
   *dollar=number;
   *cent= (number - *dollar)*100;
}
int main(void){
	float money;
	int d;
	int c;
	printf("enter money: ");
	scanf("%f",&money);
	separate(money,&d,&c);
        /*use separate to get d (dollar), c for (cent)*/
    printf("%.2f is %d dollars and %d cents",money,d,c); 
}



