// write a program to convert the lowercase letters to uppercase and ouput to a temp file and rename the temp file to the orginial file and delete the temp file

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FILENAME "file2.txt"

int main(void)
{
    FILE *fp = NULL;
    FILE *fp1 = NULL;
    char ch = ' ';

    // OPEN FILE
    fp = fopen(FILENAME, "r");

    // if file does not exist
    if (fp == NULL)
    {
        printf("File does not exist.");
        return -1;
    }

    // create a temp file
    fp1 = fopen("temp.txt", "w");

    // if file does not exist
    if (fp1 == NULL)
    {
        return -1;
    }

    // change to upper case
    while ((ch = fgetc(fp)) != EOF)
    {
        if (islower(ch))
        {
            ch = ch - 32; // ASCII conversion to uppercase
        }

        // puts the characters modification from fp to fp1
        fputc(ch, fp1);
    }

    // close file
    fclose(fp);
    fclose(fp1);

    // rename temp file to file2.txt
    rename("temp.txt", FILENAME);

    // remove the temp file
    remove("temp.txt");

    // reopen fp
    fp = fopen(FILENAME, "r");

    if (fp == NULL)
    {
        return -1;
    }

    // print the file out
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    printf("\n");

    // close file
    fclose(fp);
    fp = NULL;
    fp1 = NULL;
}