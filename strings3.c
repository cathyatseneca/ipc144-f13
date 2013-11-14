#include <stdio.h>
#include <string.h>
int main(void){
 //declare an array of 30 strings, each of which can hold
 //words up to 20 characters
 char strings[30][21]={"cat","dog","mouse"};
 //put the word hamster into the 4th element of the strings
 //array
  strcpy(strings[3],"hamster");

  //DOES NOT WORK!!!!
  //note: strings[3]="hamster" does not work!!!!
  //DOES NOT WORK!!!!

}
