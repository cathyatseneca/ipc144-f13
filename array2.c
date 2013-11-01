#include <stdio.h>

//note that when passing an array to the function you don't include
//the size in the [].  arrays are passed by their start location
//in memory.  Changing an array in a function results in changes
//to original array.
void print(int arr[],int sz);

int main(void){
	//every array has a capacity (thats the number it is declared
	//with 11 in this case.  but it also has a size, which is how
	//much is being used.  In this case array has 6 values so size is 6)
	int arr[11]={1,2,3,4,5,6};
	int i;

	print(arr,6);


	for(i=0;i<6;i++){
		print(arr,i+1);
	}

}
void print(int arr[],int sz){
	int i;
	for(i=0;i<sz;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
