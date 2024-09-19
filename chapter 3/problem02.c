#include <stdio.h>

int main(){
    int income,tax=0;
    printf("enter your income in lakhs :");
    scanf("%d",&income);
   if (income>=250000 && income<500000){
    tax=0.05*(income-250000);
   
    }
    else if (income>=500000 && income<1000000){
        tax=0.1*(income-500000)+12500;
    }
    else if (income>=1000000 ){
        tax=0.3*(income-1000000)+37500;
    }
    else{
        printf(" you are tax free ");
    }
    printf("\ntotal tax you need to pay is :%d",tax);
    return 0;
}