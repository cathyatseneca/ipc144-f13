/*write a function called getDigits.
  get digits will be passed a 3 digit integer.
  it will pass back the first, second and third digit
  of that number separately through 3 pointer arguments*/

 void  getDigits(int data,int* first,
 	                       int* second, int* third){


 }

/*write a function that called nthDigit which will be
  passed a number and the digit that we wish to return
  The digit numbering starts at the 1's column.
  For example: the first digit of  12345, is 5. In order
  to get the digit in the thousand column, I would use 4
  for the digit I wish to get*/
int nthDigit(int number, int digitNumber){
	int i;
	for(i=0;i<digitNumber-1;i++){
		number=number/10;
	}
	return number % 10;
}


