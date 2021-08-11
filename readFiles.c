// write a program to find the total number of lines in a text file

#include <stdio.h>
#include <stdlib.h>

#define FILENAME "file.txt"

int main(void)
{
    FILE *fp = NULL;
    char ch;
    int linesCount = 0;

    // open file
    fp = fopen(FILENAME, "r");

    // if file does not exist
    if (fp == NULL)
    {
        printf("File does not exist.");
        return(-1);
    }

    // reads a single char ch
    while ((ch = fgetc(fp)) != EOF) // EOF = end of file
    {
        if (ch == '\n')
        {
            linesCount++;
        }
    }

    // close file
    fclose(fp);
    fp = NULL;

    // print output required
    printf("Total numebr of lines: %d\n", linesCount + 1);
}