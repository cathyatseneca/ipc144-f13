#include <stdio.h>
/*this program will read in the information stored
  in bacon.txt and print out each record in this 
  format:

   product number - product name: price

  to the standard output.
  You may assume that the product name is no more than 
  50 characters long
 */

struct Bacon{
	int productNumber;
	char productName[51];
	double productPrice;
};
int main(void){

  //open the file.  name of file is bacon.txt.  Opening for
  //reading so use r as the mode
  FILE* baconFile=fopen("bacon.txt","r");
  //declare a variable of type Bacon (a struct)
  struct Bacon theBacon;
  int readResult;
  //read a record
  readResult=fscanf(baconFile,"%d;%[^;];%lf\n",&theBacon.productNumber,
  									theBacon.productName,
  									&theBacon.productPrice);
  //as long as the file has not been fully read
  while(readResult == 3){
    //print it out
    printf("%d - %s: $%.2lf\n",theBacon.productNumber,
    						    theBacon.productName,
    						    theBacon.productPrice);
    //read a record
    readResult=fscanf(baconFile,"%d;%[^;];%lf\n",&theBacon.productNumber,
  									theBacon.productName,
  									&theBacon.productPrice);
  }
   
  //close file
  fclose(baconFile);
  return 0;
}