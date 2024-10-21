#include <stdio.h>
// To write at the end of file using apend mode
int main(){
    FILE *ptr;
    ptr=fopen("file03.txt","a");//apend mode write at the end of file (EOF) without deleting previous data
    int num=100;
    fprintf(ptr,"%d",num);
    printf("the num is %d",num);
    fclose(ptr);
    return 0;
}