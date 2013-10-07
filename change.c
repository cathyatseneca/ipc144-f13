/* this function is passed an int representing the amount of change
   we want to make, and we need to determine how many of each type
   of coins is necessary to make that change.

  amt is the number of cents to be given as change to a customer.
  numloonies, numtoonies, numquarters, numdimes, numnickels are all
  pointers that hold the addresses of variable where we wish to store
  that information
*/

void getChange(int amt,int* numLoonies, int* numToonies,
			int* numQuarters,int* numDimes, int* numNickels){

}
int main(void){
  int loonies;
  int toonies;
  int quarters;
  int dimes;
  int nickels;
  int numCents;

  printf("enter the number of cents to make change for: ");
  scanf("%d",&numCents);
  getChange(numCents,&loonies,&toonies,&quarters,&dimes,&nickels);
  printf("Change is:\n");
  printf("  loonies: %d\n",loonies);    
  printf("  toonies: %d\n",toonies);    
  printf("  quarter: %d\n",quarter);    
  printf("  dimes: %d\n",dimes);    
  printf("  nickels: %d\n",nickels);    
}
