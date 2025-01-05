#include <stdio.h>
#include <stdlib.h>
/* DOUBLY LINKED LIST IMPLEMENTATION*/
// Define the structure for a linked list node
struct node
{
    int info;
    struct node *prev;
    struct node *next;
};
typedef struct node n;

/* passing  tail pointer by reference 
because as we update it changes must reflect back as we need it while doing insertion at the end */

// Function to insert at the beginning of the linked list
n *b_insertion(n *head,n **tail, int newdata)
{
    n *start = (n *)malloc(sizeof(n));
    n *temp=head;
    if (start == NULL)
    {
        printf("OVERFLOW !!!!!!\n");
    }
    else
    {
        start->info=newdata;
        if(head==NULL){
            head=start;
            *tail=start;
            start->next=NULL;
            start->prev=NULL;
        }
        else{
            temp->prev=start;
            start->next=temp;
            start->prev=NULL;
            head=start;
        }

    }
    return head;
}
// Function to insert at the end
n *e_insertion(n *head,n **tail, int newdata)
{
    n *start = (n *)malloc(sizeof(n));
    n *temp = *tail;
    if(start==NULL){
        printf("OVERFLOW !!!\n");
    }
    else{
        start->info=newdata;
        if(*tail==NULL){
            printf("This is the first NODE !!! \n");
            head=*tail=start;
            start->next=NULL;
            start->prev=NULL;
        }
        else{
            temp->next=start;
            start->prev=temp;
            start->next=NULL;
            *tail=start;
        }
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
        start->info=newdata;
        for (int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }
        temp->prev->next=start;
        start->prev=temp->prev;
        start->next=temp;
        temp->prev=start;
    }
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
    n *temp=head;
    head->next->prev=NULL;
    head=head->next;
    free(temp);
    return head;
}
// Function to delete from the end
n *e_deletion(n *head,n **tail)
{
    if (head == NULL)
    {
        printf("UNDERFLOW !!!\n");
        return NULL;
    
    }
    n *temp=*tail;
    temp->prev->next=NULL;
    *tail=temp->prev;
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
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        free(temp);
    }
    return head;
}
// Function to print list
void print_list(n *head)
{
    n *temp = head;
    printf("Linked list: ");
    while (temp != NULL)
    {
        printf("%d <--> ", temp->info);
        temp = temp->next;
    }
    printf("NULL\n");
}
void doubly_linkedlist(){
    n *head = NULL;
    n *tail = NULL;
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

        switch (choice){
            case 1:
            printf("Enter value to insert at the beginning: ");
            scanf("%d", &value);
            if (head == NULL)
            {
                printf("Initially List is empty \nThis is the first node of this linked list :");
                head = b_insertion(head,&tail, value);
            }
            else
                head = b_insertion(head,&tail, value);
            break;
            case 2:
            printf("Enter value to insert at the end: ");
            scanf("%d", &value);
            if (head == NULL)
            {
                head = b_insertion(head,&tail, value); // Handle empty list
            }
            else
            {
                head = e_insertion(head,&tail, value);
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
            head = e_deletion(head,&tail);
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
int main(){
    doubly_linkedlist();
}