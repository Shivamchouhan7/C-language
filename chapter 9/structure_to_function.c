#include <stdio.h>

// Define the structure
struct Person {
    char name[50];
    int age;
};

// Function to pass structure by value
void displayPersonByValue(struct Person p) {
    printf("By Value - Name: %s, Age: %d\n", p.name, p.age);
}

// Function to pass structure by reference
void displayPersonByReference(struct Person *p) {
    printf("previous Name: %s, previous Age: %d\n", p->name, p->age);
    printf("Enter new name: ");
    scanf("%s", p->name);
    printf("Enter new age: ");
    scanf("%d", &p->age);
    printf("New Name: %s, New Age: %d\n", p->name, p->age);
}

int main() {
    struct Person person1;

    // Assign values to the structure
    printf("Enter name: ");
    scanf("%s", person1.name);
    printf("Enter age: ");
    scanf("%d", &person1.age);
    // Call the functions
    displayPersonByValue(person1); // Passing by value

    printf("Enter 1 for update name and age  \n");
    int num;
    scanf("%d",&num);
    if(num==1){
        displayPersonByReference(&person1);// Passing by reference
    }
    else
    printf("Enter valid value if you want to update the data \n");
    

    return 0;
}
