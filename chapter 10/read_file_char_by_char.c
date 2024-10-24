#include <stdio.h>
// To read file character by character
int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("char.txt", "r");

    while (1)
    {
        ch = fgetc(ptr);
        printf("%c", ch);
        if (ch == EOF)
        {
            break;
        }
    }
    return 0;
}