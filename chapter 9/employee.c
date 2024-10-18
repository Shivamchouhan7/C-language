#include <stdio.h>
#include <string.h>

// Define a structure to represent an employee
struct employee {
    char name[50]; // Array to hold the employee's name
    int id;        // Integer to hold the employee's ID
    float salary;    // Integer to hold the employee's salary
};

int main() {
    // Create an instance of the employee structure
    struct employee e1;
    printf("Enter the name of an employee:");
    scanf("%s",&e1.name);
    printf("Enter the ID of an employee:");
    scanf("%d",&e1.id);
    printf("Enter the Salary of an employee:");
    scanf("%f",&e1.salary);


    //prints details of
    printf("Name: %s\n", e1.name);   //employee's name
    printf("ID: %d\n", e1.id);       //employee's ID
    printf("Salary: %.2f\n", e1.salary); //employee's salary

    return 0; 
}