#include <stdio.h>
#include<stdlib.h>
//CALLOC() FUNCTION
int main(){
    int num;
    printf("Enter the size of array : ");
    scanf("%d",&num);
    // Allocate memory using calloc
    float *ptr=(float*)calloc(num,sizeof(float));/*Used when allocating memory for arrays or 
    when zero-initialization is required.*/
    // Initialize the array 
    for (int i = 0; i < num; i++) {
        ptr[i] = (i+1) * 10.0; 
    }
    printf("Elements in the array:\n");
    for (int i = 0; i < num; i++) {
        printf("%.2f \n", ptr[i]);
    }
    free(ptr);
    return 0;
}