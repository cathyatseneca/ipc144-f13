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
  printf("Welcome to the array algorithm testing program");
  printf("Here is the array we are working with:\n");
  print(array,MAX);
  printMenu();
  choice = getChoice();
  while(choice != 'd'){
    if(choice == 'b'){
      sort(array,MAX);
    }
    else{
      if(choice=='a'){
        printf("enter a key(number you are looking for): ");
        scanf("%d",&key);
        linearSearch(key,array,MAX);
      }
      else if(choice =='c' && isSorted){
        printf("enter a key(number you are looking for): ");
        scanf("%d",&key);
        binarySearch(key,array,MAX);
      }
      else{
        printf("cannot binary search unsorted array\n");
        
      }

    }
  }

}
void genArray(int array[],int sz){
  printf("not working yet\n");
}
void print(int array[],int sz){
  printf("not working yet\n");
}
int linearSearch(int key, int array[],int sz){
  printf("not working yet\n");
  return 0;
}
int binarySearch(int key, int array[],int sz){
  printf("not working yet\n");
  return 0;
}
void sort(int array[],int sz){
  printf("not working yet\n");

}
void printMenu(){
  printf("Please choose one of the following options: \n");
  printf("a) Sort Array\n");
  printf("b) Perform Linear Search\n");
  printf("c) Perform Binary Search(must be done on sorted array)\n ");
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
