#include <stdio.h>
#include<stdlib.h>
/*Create an array dynamically capable of storing 5 integers. Now use realloc so 
that it can now store 10 integers.*/
int main(){
    int n=5,num;
    int *ptr;
    ptr=(int*)malloc(n*sizeof(int));
    ptr=(int*)realloc(ptr,10*sizeof(int));
    for(int i=0;i<10;i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<10;i++){
        printf("Element %d : %d\n ",i+1,ptr[i]);
    }

    return 0;
}