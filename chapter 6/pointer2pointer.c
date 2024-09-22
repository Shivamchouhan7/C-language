#include <stdio.h>

int main(){
    int i=6;
    int* j=&i;// j is pointer pointing to i . j now holds the address of i
    int** k=&j;// k is pointer pointing to j . k now holds the address of j
    /*this is called pointer to pointer address of i is stored in j 
    and address of j is stored in k this further may continue*/
    printf("the value of i is %d\n",i);//prints value of i
    printf("the address of i is %u\n",&i);//address of i
    printf("the value of i is %d\n",*j);//this also prints the value of i
    printf("the value of j is %d\n",j);//this return address of i
    printf("the address of j is %u\n",&k);
    printf("the value of k is %d\n",k);/* we can cancel one "&" by one "*" */
    return 0;
}