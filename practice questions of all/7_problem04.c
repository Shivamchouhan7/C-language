#include <stdio.h>
//a program containing functions which counts the number of positive integers in an array
int positive_num_count(int a[],int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0){
            count+=1;
        }
    }
    return count;
}
int main(){
    int n;
    printf("enter size of array :");
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
    printf(" enter element of index %d :",i);
        scanf("%d",&array[i]);
    }
    printf(" there are %d positive numbers present in this array \n",positive_num_count(array,n));
    
    return 0;
}