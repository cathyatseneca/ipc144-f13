#include <stdio.h>

int main(void){
    FILE* fp;

    //call the fopen function to open a file
    //first parameter is the name of the file
    //second parameter is the mode that the file is open in
    //for our purposes this will be "w" for write
    //"r" for read and "a" for append
    //write mode will erase contents of file if it 
    //exists and replace with your output to the file
    fp=fopen("hello.txt","a");
    fprintf(fp,"hello world!\n");
    fprintf(fp,"this is the second line in the file\n");
    fclose(fp);
    return 0;
}
