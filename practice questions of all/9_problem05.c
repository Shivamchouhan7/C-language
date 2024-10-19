#include <stdio.h>
/*structure representing a bank account of a customer*/
struct bank
{
    char name[50];
    long int account_no;
    long int pan_no;
    long int adhar_no;
    long int phone_no;
};

int main(){
    int num;
    printf("Enter the number of customers :");
    scanf("%d",&num);
    struct bank c[num];
    for(int i=0;i<num;i++){
        printf("Enter  Name of customer %d : ",i+1);
        scanf("%s",c[i].name);
        printf("Enter Account no. of customer %d : ",i+1);
        scanf("%ld",&c[i].account_no);
        printf("Enter PAN no. of customer %d : ",i+1);
        scanf("%ld",&c[i].pan_no);
        printf("Enter ADHAR no. of customer %d : ",i+1);
        scanf("%ld",&c[i].adhar_no);
        printf("Enter CONTACT no. of customer %d: ",i+1);
        scanf("%ld",&c[i].phone_no);
    }
    for (int i = 0; i < num; i++)
    {
        printf("====================================\n");
        printf("Details of customer %d \n",i+1);
        printf("NAME : %s\nACCOUNT_NO : %ld\nPAN_NO.: %ld\nADHAR_NO.: %ld\nCONTACT_NO.: %ld\n",c[i].name,c[i].account_no,c[i].pan_no,c[i].adhar_no,c[i].phone_no);
    }printf("====================================");
    
    
    return 0;
}