/*This program will ask the user to enter the 
  base and height of a triangle (assume whole numbers)
  and calculate its area.
  
  area of triangle = (base X height)
                      -------------
                           2
*/
/*
  step 1 ask for base and read
  step 2 ask for height and read
  step 3 calculate area
  step 4 display result
*/
#include <stdio.h>
int main(void){
  int base;
  int height;
  double area;
  printf("please enter the base: ");
  scanf("%d",&base);
  printf("please enter the height: ");
  scanf("%d",&height);
  
  area=(base*height)/2.0;
 //alternatively: area=((double)(base*height))/2;
  printf("The area of a triangle with base of %d and height of %d is: ",base, height);
  //below will show on same line as prev statement
  //the format code %lf means long float (a double) and the .2 means
  //show to 2 decimal place
  printf("%.2lf\n",area);
  return 0;
}
