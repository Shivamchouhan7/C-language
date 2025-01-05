#include <stdio.h>
#include <stdlib.h>
/* CIRCULAR SINGLE LINKED LIST IMPLEMENTATION */

// Define the structure for a circular singly linked list node
struct node
{
    int info;
    struct node *next;
};
typedef struct node n;

// Function to insert at the beginning of the linked list
n *b_insertion(n *head, int newdata)
{
    n *start = (n *)malloc(sizeof(n));
    if (start == NULL)
    {
        printf("OVERFLOW !!!!!!\n");
    }
    else
    {
        start->info = newdata;
        if (head == NULL)
        {
            start->next = start;
            head = start;
        }
        else
        {
            n *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = start;
            start->next = head;
            head = start;
        }
    }
    return head;
}

// Function to insert at the end of the linked list
n *e_insertion(n *head, int newdata)
{
    n *start = (n *)malloc(sizeof(n));
    n *temp = head;
    if (start == NULL)
    {
        printf("OVERFLOW !!!!!!\n");
    }
    else
    {
        start->info = newdata;

        if (head == NULL)
        {
            start->next = start;
            head = start;
        }
        else
        {
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = start;
            start->next = head;
        }
    }
    return head;
}
// function to insert at the specific position of the linked list
n *sp_insertion(n *head, int pos, int newdata)
{
    n *start = (n *)malloc(sizeof(n));
    n *temp = head;
    n *temp1 = head;
    
    if (start == NULL)
    {
        printf("Overflow !!!!!");
    }
    else
    {   int count = 1;
        start->info = newdata;
        while (temp->next != head)
        {
            temp = temp->next;
            count++;
        }
        printf("%d positions are there in linked list :\n", count);
        if (pos > (count + 1))
        {
            printf("This position does not exist !!!\n");
        }
        else if (pos == (count + 1))
        {
            printf(" SORRY This is the condition of insertion at the end :\n choose 2 for this task");
        }
        else if (pos == 1)
        {
            printf(" SORRY This is the condition of insertion at the beginning :\n choose 1 for this task");
        }
        else{
            temp=head;
            for(int i=1;i<pos;i++){
                temp1=temp;
                temp=temp->next;
            }
            start->next=temp;
            temp1->next=start;
        }
    }
    return head;
}
// Function to delete from the beginning of the linked list
n *b_deletion(n *head)
{n* temp=head;
    if (head == NULL)
    {
        printf("UNDERFLOW !!!\n");
        return NULL;
    }
    else{
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=head->next;
        head=head->next;
    }
    
    return head;
}
// Function to delete from the end of the linked list
n *e_deletion(n *head)
{   n *temp = head;
    n *temp1 = head;
    if (head == NULL)
    {
        printf("UNDERFLOW !!!\n");
        return NULL;
    }
    else{
        while(temp->next!=head){
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=head;
    }
    free(temp);
    return head;
}
// Function to delete from the specific position of the linked list
n *sp_deletion(n *head, int pos)
{
    n *temp = head;
    n *temp1 = head;
    int count = 1;
    while (temp->next != head)
    {
        temp = temp->next;
        count++;
    }
    printf("%d positions are there in linked list :\n", count);
    if (pos > count)
    {
        printf("This position does not exist !!!\n");
    }
    else if (pos == count)
    {
        printf(" SORRY This is the condition of deletion at the end :\n");
    }
    else if (pos == 1)
    {
        printf(" SORRY This is the condition of deletion at the beginning :\n");
    }
    else
    {
        temp = head;
        for (int i = 1; i < pos; i++)
        {
            temp1 = temp;
            temp = temp->next;
        }
        temp1->next = temp->next;
        
    }
    free(temp);

    return head;
}


void print_list(n *head)
{
    n *temp = head;
    printf("Linked list: ");
    while (temp->next != head)
    {
        printf("%d -> ", temp->info);
        temp = temp->next;
    }
    printf("%d -> ", temp->info);
    printf("first node \n");
}
void  circular_singlyLinkedList()
{
    n *head = NULL;
    int choice, value, position;

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Specific Position\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from End\n");
        printf("6. Delete from Specific Position\n");
        printf("7. Print List\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to insert at the beginning: ");
            scanf("%d", &value);
            if (head == NULL)
            {
                printf("Initially List is empty \nThis is the first node of this linked list :");
                head = b_insertion(head, value);
            }
            else
                head = b_insertion(head, value);
            break;
        case 2:
            printf("Enter value to insert at the end: ");
            scanf("%d", &value);
            if (head == NULL)
            {
                head = b_insertion(head, value); // Handle empty list
            }
            else
            {
                head = e_insertion(head, value);
            }
            break;
        case 3:
            printf("Enter position where you want to insert : ");
            scanf("%d", &position);
            printf("Enter value to insert: ");
            scanf("%d", &value);
            head = sp_insertion(head, position, value);
            break;
        case 4:
            head = b_deletion(head);
            break;
        case 5:
            head = e_deletion(head);
            break;
        case 6:
            printf("Enter position to delete from: ");
            scanf("%d", &position);
            head = sp_deletion(head, position);
            break;
        case 7:
            print_list(head);
            break;
        case 8:
            printf("Exiting program.-------->>>>>>\n Done by--> Shivam Chouhan.\n");
            return;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
}
int main()
{
    circular_singlyLinkedList();

    return 0;
}