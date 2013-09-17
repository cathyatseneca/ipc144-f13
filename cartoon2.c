#include <stdio.h>
/*Write a program that will give the user a list of cartoon characters and 
print the type of animal the character is*/
int main(void){
  /*scooby and spongebob*/
  int choice;  //value entered by user
  /*ask user for a choice, this involves
    telling them what their choices are*/
   printf("Choose one of the following: \n");
   printf("1) Scooby\n");
   printf("2) Sponge Bob\n");
   printf("Choice: ");
   scanf("%d", &choice);
   if(choice == 1){
     printf("Scooby is a dog\n");
   }
   else if(choice == 2){
      printf("Sponge Bob is a sponge\n");
   }
   else{
      printf("Invalid entry\n");
   }
   
  return 0;
}
