#include <stdio.h>
#define MAX 10

/*this function prints all the array passed in
  This array has a size of size.  Print values
  in array one element per line*/
void printArray(int array[],int size);
int main(void){
	int arr[MAX] = {3,7,10,14,2,1,16,15,12,5};
	int arr2[MAX/2];
	for(i=0;i<MAX/2;i++){
		arr[i]=i+1;
	}
	printArray(arr,MAX);
	printArray(arr2,MAX/2);
}
void printArray(int array[],int size){

}
