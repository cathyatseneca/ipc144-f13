#include <stdio.h>
#include <stdlib.h>
#define MAX 20

void genArray(int array[],int sz);
void print(int array[],int sz);
int linearSearch(int key, int array[],int sz);
int binarySearch(int key, int array[],int sz);
void sort(int array[],int sz);
void printMenu();
char getChoice();
int main(void){
  int array[MAX];
  int key;
  char choice;
  int isSorted=0;
  genArray(array,MAX);
  printf("Welcome to the array algorithm testing program\n");
    printf("Here is the array we are working with:\n");
    print(array,MAX);
  printMenu();
  choice = getChoice();
  while(choice != 'd'){
    if(choice == 'a'){
      sort(array,MAX);
      isSorted=1;
    }
    else{
      if(choice=='b'){
        printf("enter a key(number you are looking for): ");
        scanf("%d",&key);
        int location = linearSearch(key,array,MAX);
        printf("%d was found in array[%d]\n",key,location);
      }
      else if(choice =='c' && isSorted){
        printf("enter a key(number you are looking for): ");
        scanf("%d",&key);
        int location=binarySearch(key,array,MAX);
        printf("%d was found in array[%d]\n",key,location);
      }
      else{
        printf("cannot binary search unsorted array\n");
        
      }

    }
    printf("Here is the array we are working with:\n");
    print(array,MAX);
    printMenu();
    choice = getChoice();
  }

}
/*this function generates random values for the array
  the numbers generated will be between 1 and 100*/
void genArray(int array[],int sz){
  int random=0;
  int i;
  int min = 1;
  int max = 100;
  for(i=0;i<sz;i++){
    random=rand()%(max-min+1)+min;
    array[i]=random;
  }
}
/*this function prints the array passed in on one line*/
void print(int array[],int sz){
  int i;
  for(i=0;i<sz;i++){
    printf("%d ",array[i]);
  }
  printf("\n");

}
/*this function returns the index of where key is within the 
   array.  If key does not exist in the array, function returns
  -1*/
int linearSearch(int key, int array[],int sz){
  int i;  //index of element currently being examined;
  int rc = -1;  //assume key is not in array.  When found,
                //change this to index
  for(i=0;i<sz && rc==-1;i++){
    if(array[i] == key){
      rc=i;
    }
  }  
  return rc;
}
int binarySearch(int key, int array[],int sz){
  int low=0;       //index of the first element we are interested in
  int high=sz-1;   //index of last element we are interested in
  int mid;
  int rc=-1;

  while(rc==-1 && low<=high){
    mid = (low+high)/2;
    if(array[mid]==key){
        rc=mid;
    }
    else if(array[mid]> key){
        high=mid-1;
    }
    else{
        low=mid+1;
    }
  }
  return rc;
}
void sort(int array[],int sz){
    int i,j;
    int tmp;
    for(i=0;i<sz;i++){
        for(j=0;j<sz-1-i;j++){
           if(array[j] > array[j+1]){
		tmp=array[j];
                array[j]=array[j+1];
                array[j+1]=tmp;
           }
        }
    }
}
void printMenu(){
  printf("Please choose one of the following options: \n");
  printf("a) Sort Array\n");
  printf("b) Perform Linear Search\n");
  printf("c) Perform Binary Search(must be done on sorted array)\n");
  printf("d) Exit\n ");
}
char getChoice(){
  char choice;
  printf("====> ");
  scanf(" %c",&choice);
  while(!(choice >='a' && choice <= 'd')){
    printf("please choose a-d\n");
    printf("====> ");
    scanf(" %c",&choice);
  }
  return choice;
}
