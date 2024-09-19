#include <stdio.h>

int main(){
   int num;
    printf("enter percentage for cheacking grade of the student : ");
    scanf("%d",&num);
    if(num <=50 ){
        printf("your grade is\'F\'");
    }
    else if(num>50 && num<=60 ){
        printf("your grade is\'E\'");
    }
    else if( num>=60 && num <70 ){
        printf("your grade is\'D\'");
    }
    else if( num>=70 && num <80){
        printf("your grade is\'C\'");
    }
    else if(num>=80 && num <90 ){
        printf("your grade is\'B\'");
    }
    else if(num>=90 && num<=100 ){
        printf("your grade is\'A\'");
    }
    else{
        printf("you entered wrong value....");
    }
   
    
    return 0;
}