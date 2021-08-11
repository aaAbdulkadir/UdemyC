// write a program to print the contents of the file in reverse order

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FILENAME "file3.txt"

int main(void)
{
    FILE *fp = NULL;
    
    int counter = 0;
    int i = 0;

    // OPEN FILE
    fp = fopen(FILENAME, "r");

    // if file does not exist
    if (fp == NULL)
    {
        printf("File does not exist.");
        return -1;
    }

    // seek to end of the file, changes where the pointer is pointing to i.e. end of file
    fseek(fp, 0, SEEK_END);

    // get the position of the file pointer fp i.e. will be the end in this case
    counter = ftell(fp);

    while (i < counter)
    {
        i++;
        fseek(fp, -i, SEEK_END); // -i to go backwards from the end
        printf("%c", fgetc(fp));
    }

    printf("\n");

    // close file
    fclose(fp);
    fp = NULL;
}