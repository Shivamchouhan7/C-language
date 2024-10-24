#include <stdio.h>
// program to modify a file containing an integer to double its value.
int main(){
    FILE *ptr;
    int num;
    ptr=fopen("problem04.txt","r");
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    ptr=fopen("problem04.txt","w");
    fprintf(ptr,"%d",num*2);
    fclose(ptr);
    return 0;
}