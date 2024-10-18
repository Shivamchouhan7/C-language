#include <stdio.h>
#include <string.h>

// Define a structure to represent an employee
struct employee {
    char name[50]; // Array to hold the employee's name
    int id;        // Integer to hold the employee's ID
    int salary;    // Integer to hold the employee's salary
};

int main() {
    // Create an instance of the employee structure
    struct employee e1;

    // Copy a string into the name field of the employee structure
    strcpy(e1.name, "shivam chouhan");
    
    // Assign values to the other fields of the employee structure
    e1.id = 231124;     // Set the employee's ID
    e1.salary = 500000; // Set the employee's salary

    //prints details of employee
    printf("Name: %s\n", e1.name);   //employee's name
    printf("ID: %d\n", e1.id);       //employee's ID
    printf("Salary: %d\n", e1.salary); //employee's salary

    return 0; 
}
