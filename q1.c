#include <stdio.h>
#define CMININCH 2.54
int main(void){
	int feet;
	double inches;
	double metric;

	//read in number feet
	printf("enter the number of feet in the measurement: ");
	scanf("%d",&feet);
	//read in number of inches
	printf("enter the number of inches in the measurement: ");
	scanf("%lf",&inches);
    //calculate metric equivalent
    metric = (feet* 12 + inches)*CMININCH;
    //print result
    printf("The metric equivalent is : %.2lf",metric);
}