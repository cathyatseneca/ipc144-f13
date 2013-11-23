int search(int key,int data[],int size){
  int rc=-1;
  int i;
  for(i=0;i<size && rc==-1;i++){
    if(data[i]==key){
      rc=i;
    }
  } 
  return rc;
}
int validRow(int grid[][9],int rowNumber){
   int isGood=1;
   for(i=0;i<9 && isGood;i++){
       if(search(i+1,grid[rowNumber],9)==-1){
          isGood=0;
       }
   }
   return isGood;
}


