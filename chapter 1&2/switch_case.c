#include <stdio.h>

int main(){
    int a;
    printf("Enter number :\n");
    printf("Enter \"1\" for addition\'+\' \n");
    printf("Enter  \"2\" for substraction\'-\' \n");
    printf("Enter  \"3\" for division\'/\' \n");
    printf("Enter  \"4\" for multiplication\'*\' \n");
    scanf("%d",&a);
    switch(a){
    
        case 1:
        printf("you entered 1\n");
        int b,c,d;
        printf("enter 1st num : ");
        scanf("%d",&b);
        printf("enter 2nd num :");
        scanf("%d",&c);
        printf("The sum of %d and %d is %d",b,c,(b+c));
        break;
        case 2:
        printf("you entered 2\n");
        int e,f;
        printf("enter 1st num : ");
        scanf("%d",&e);
        printf("enter 2nd num :");
        scanf("%d",&f);
        printf("The substractin of %d and %d  is %d",e,f,e-f);
        break;
        case 3:
        printf("you entered 3\n");
        int g,h;
        printf("enter 1st num : ");
        scanf("%d",&g);
        printf("enter 2nd num :");
        scanf("%d",&h);
        printf("The division of %d by %d  is %d",g,h,g/h);
        break;
        case 4:
        printf("you entered 4\n");
        int i,j;
        printf("enter 1st num : ");
        scanf("%d",&i);
        printf("enter 2nd num :");
        scanf("%d",&j);
        printf("The multiplication of %d and %d is %d",i,j,i*j);
        break;
        
        default:
        printf("you entered wrong value");
        
    }
    return 0;
}