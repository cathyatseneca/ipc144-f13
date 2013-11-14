void minMax(int arr[],int sz,int* min,int* max){
   *min=arr[0];
   *max=arr[0];
   int i;
   for(i=0;i<sz;i++){
     if(arr[i] < *min)
       *min=arr[i];
     if(arr[i] > *max)
       *max=arr[i];
   }
}
