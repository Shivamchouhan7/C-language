#include <stdio.h>
struct data
{
    char name[50];
    int id;
    float salary;
};
int main(){
    struct data facebook[2];
    for(int i=0;i<2;i++){
        printf("enter name of employee %d :",i+1);
        scanf("%s",&facebook[i].name);
        printf("enter ID of employee %d :",i+1);
        scanf("%d",&facebook[i].id);
        printf("enter SALARY of employee %d :",i+1);
        scanf("%f",&facebook[i].salary);
    }
    for(int i=0;i<2;i++){
        printf("ID of employee %d = %d\n SALARY of employee %d = %.2f\n",i+1,facebook[i].id,i+1,facebook[i].salary);
    }
    
    return 0;
}