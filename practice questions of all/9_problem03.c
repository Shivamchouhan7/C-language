#include <stdio.h>
/* program with a structure representing a complex number*/
struct complexNum
{
    float real;
    float img;
};

int main(){
    typedef struct complexNum c;
    c c1;
    printf("Enter real part of complex number: \n");
    scanf("%f",&c1.real);
    printf("Enter Imaginary part of complex number: \n");
    scanf("%f",&c1.img);
    printf("Complex num is %.2f +%.2fi \n",c1.real,c1.img);
    
    return 0;
}