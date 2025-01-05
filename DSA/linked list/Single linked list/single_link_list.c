#include <stdio.h>
#include <stdlib.h>
/* SINGLE LINK LIST IMPLEMENTATION  */

// Define the structure for a linked list node
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
        start->next = head;
        head = start;
    }
    return head;
}

// Function to insert at a specific position
n *sp_insertion(n *head, int pos, int newdata)
{
    n *start = (n *)malloc(sizeof(n));
    n *temp = head;
    n *temp1 = head;
    int count = 1;

    while (temp->next != NULL)
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
        printf(" SORRY This is the condition of insertion at the end\nplease choose 2 for this task :\n");
    }
    else if (pos==1)
    {
        printf(" SORRY This is the condition of insertion at the beginning :\nplease choose 1 for this task :\n");
    }
    else
    {
        temp = head;
        for (int i = 1; i < pos; i++)
        {
            temp1 = temp;
            temp = temp->next;
        }
        start->next = temp;
        start->info = newdata;
        temp1->next = start;
    }
    return head;
}

// Function to insert at the end
n *e_insertion(n *head, int newdata)
{
    n *start = (n *)malloc(sizeof(n));
    n *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = start;
    start->info = newdata;
    start->next = NULL;

    return head;
}

// Function to delete from the beginning
n *b_deletion(n *head)
{
    if (head == NULL)
    {
        printf("UNDERFLOW !!!\n");
        return NULL;
    }
    n *temp = head;
    head = temp->next;
    free(temp);
    return head;
}

// Function to delete from a specific position
n *sp_deletion(n *head, int pos)
{
    n *temp = head;
    n *temp1 = head;
    int count = 1;

    while (temp->next != NULL)
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
        printf(" SORRY This is the condition of deletion at the end !!!! \n choose 5 for this task\n");
    }
    else if (pos == 1)
    {
        printf(" SORRY This is the condition of deletion at the beginning !!!!\n choose 4 for this task");
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
        free(temp);
    }
    return head;
}

// Function to delete from the end
n *e_deletion(n *head)
{
    if (head == NULL)
    {
        printf("UNDERFLOW !!!\n");
        return NULL;
    }
    n *temp = head;
    n *temp1 = head;
    while (temp->next != NULL)
    {
        temp1 = temp;
        temp = temp->next;
    }
    temp1->next = NULL;
    free(temp);
    return head;
}

// Function to print the linked list
void print_list(n *head)
{
    n *temp = head;
    printf("Linked list: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->info);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to manage operations using a switch case
void singlyLinkedList()
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
    singlyLinkedList();
    return 0;
}
