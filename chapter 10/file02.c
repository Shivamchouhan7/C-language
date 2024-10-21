#include <stdio.h>
// reading integer data from file(without error handling )
int main(){
    FILE *ptr;
    ptr=fopen("file02.txt","r");
    int num;
    fscanf(ptr,"%d",&num);
    printf("the num is %d",num);
    fclose(ptr);
    return 0;
}