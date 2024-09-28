#include <stdio.h>
// a program containing a function which reverses the array passed to it
void reverse(int a[],int n){
    for (int i = 0; i <n/2; i++)
    {int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    
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
    reverse(array,n);
     // Print the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    
    return 0;
}