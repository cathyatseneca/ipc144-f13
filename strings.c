#include <stdio.h>

int main(void){
   char str[30];
   int v=0;
   int i;
   printf("enter a word: ");
//   scanf("%s",str);
   scanf("%[^\n]",str);
   for (i=0;str[i]!='\0';i++){
      printf("%c\n",str[i]);
   }
//   scanf("%s",str);
//   printf("%s\n",str);
}
