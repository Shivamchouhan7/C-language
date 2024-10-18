#include <stdio.h>
#include <string.h>
struct employee
{
    char name[50];
    int id;
    int salary;
};

int main(){
    struct employee e1;
    strcpy(e1.name,"shivam chouhan");
    e1.id=231124;
    e1.salary=500000;
    printf("%s \n%d \n%d",e1.name,e1.id,e1.salary); 
    return 0;
}