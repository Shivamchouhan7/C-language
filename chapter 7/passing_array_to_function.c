#include <stdio.h>
void modify_array(int* a,int size);

int main(){
    int array[]={55,65,75,85,95};
    // Print original array
    for (int i = 0; i < 5; i++)
    {
        printf("the element at index %d is %d\n",i,array[i]);
    }
    modify_array(array,5);
    // print modified array 
    for (int i = 0; i < 5; i++)
    {
        printf("the element at index %d is %d\n",i,array[i]);
    } 
    return 0;
}
void modify_array(int* a,int size){
        for (int i = 0; i < size; i++){
            a[i]*=2; //double the elements of array
        }
}