#include <stdio.h>
#include<stdlib.h>
// program to dynamically create an array of size 6 capable of storing 6 integers using calloc() function
int main(){
    int n=6,num;
    int *ptr;
    ptr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<6;i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("Element %d : %d\n ",i+1,ptr[i]);
    }

    return 0;
}