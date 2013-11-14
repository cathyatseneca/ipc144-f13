#include <stdio.h>
#include <string.h>

int main(void){
   char s1[40];
   char s2[40];

   printf("enter s1: ");
   scanf("%[^\n]",s1);

   printf("copy s1 to s2: \n");
  //THIS DOES NOT WORK s2=s1;
   strcpy(s2,s1);
   //strcpy(dest,src);   
   printf("s1: %s\n",s1);
   printf("s2: %s\n",s2);
   int length=strlen(s1);
   printf("s1 is %d characters long\n",length);

   printf("enter s1: ");
   scanf(" %[^\n]",s1);   //use space in front of format code
                          //to get rid of newline in stream
   printf("enter s2: ");
   scanf(" %[^\n]",s2);
   printf("s1: %s\n",s1);
   printf("s2: %s\n",s2);
   //compare s1 and s2
   int cmp = strcmp(s1,s2);
   printf("comparing s1 and s2\n");
   printf("strcmp(\"%s\",\"%s\") == %d\n",s1,s2,cmp);
}
