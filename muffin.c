/*write a program that will calculate and print out how much someone has
  to pay for muffins.  Muffins cost 80 cents each.  if someone buys less
  than 6 muffins, they are charged for the muffins and have to pay 
  13% taxes.  If they buy 6 or more, they are charged only for the muffins
  and no taxes.*/

#include <stdio.h>
#define MUFFINUNITPRICE .80
#define TAXRATE 0.13

int main(void){
   int numMuffins;
   float cost;
   /*ask user for number of muffins they wish to buy*/
   printf("Enter the number of muffins you wish to buy: ");
   scanf("%d",&numMuffins);
   while(numMuffins <= 0){
     printf("you need to enter a positive value.\n");
     printf("Enter the number of muffins you wish to buy: ");
     scanf("%d",&numMuffins);
   }
   /*calculate the cost of the muffins*/
   cost = numMuffins * MUFFINUNITPRICE;

   /*add tax of neccessary*/
   if(numMuffins < 6){ 
     cost = cost + TAXRATE*cost;
   }   

   /*print out the result*/
   printf("your muffins cost: $%.2lf\n",cost);
}

