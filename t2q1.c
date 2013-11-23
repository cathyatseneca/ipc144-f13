void aboveBelow(int value,int data[],int size,
                    int* above, int* below, int* equal){
    int i;
    *above=*below=*equal=0;
    for(i=0;i<size;i++){
        if(data[i] > value){
            *above+=1;
        }
        else if(data[i]<value){
            *below+=1;
        }
        else{
            *equal+=1;
        }
    }
}
