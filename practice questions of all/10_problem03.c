#include <stdio.h>
/* program to read a text file character by character and write its content
twice in separate file.*/
int main()
{
    FILE *ptr1, *ptr2;
    char ch;
    ptr1 = fopen("03_source.txt", "r");
    ptr2 = fopen("03_destination.txt", "w");
    while (1)
    {
        ch = fgetc(ptr1);
        if (ch == EOF)
        {
            break;
        }
        else
        {
            printf("%c", ch);
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
        }
    }
    fclose(ptr1);
    fclose(ptr2);

    return 0;
}