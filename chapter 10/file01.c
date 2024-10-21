#include <stdio.h>
//  Create a file and write some messages to it
int main()
{
    FILE *ptr; // Creating a pointer to a file
    if (ptr == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    // Open file in writing mode (creates the file if it doesn't exist)
    ptr = fopen("file01.txt", "w");
    // Write some message to the file
    fprintf(ptr, "Hello world, this is my first file.\n");
    // Close the file
    fclose(ptr);

    return 0; // Indicate successful completion
}
