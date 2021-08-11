#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

// function declaration
void reverse(char string[]);
void bubbleSort();

int main(void)
{
    // -------------------- function 1 --------------------
    printf("\n### Program 1 - Reverse Order of String ###\n");

    // user input
    char text[100];
    printf("Input text: ");
    fgets(text, 100, stdin);

    // output
    printf("Reverse output: ");
    reverse(text);

    // -------------------- function 2 --------------------
    printf("### Program 2 - Bubble sort ###\n");
    bubbleSort();
}

// reverses order of string
void reverse(char string[])
{
    int i;

    // reverse string order
    for (i = strlen(string); i >= 0; i--)     
    {
        printf("%c", string[i]);
    }

    printf("\n\n");
}

// write a function to order n number of words into alphabetical order
void bubbleSort()
{
    // variables
    int i, j;
    int words;
    char name[100][100];
    char temp[100];

    // number of words to be ordered
    printf("Input number of words: ");
    scanf("%d", &words);

    // gets user input and stores in array
    for (i = 0; i < words; i++)
    {
        // print place for user to type in the words
        printf("Input word %d: ", i + 1);
        scanf("%s", name[i]);
    }

    // bubble sort algorithm
    for (i = 1; i <= words; i++)
    {
        for (j = 0; j < words - i; j++)
        {
            if (strcmp(name[j], name[j + 1]) > 0)
            {
                strncpy(temp, name[j], sizeof(temp) - 1);
                strncpy(name[j], name[j + 1], sizeof(name[j]) - 1);
                strncpy(name[j + 1], temp, sizeof(name[j + 1]) - 1);
            }
        }
    }

    // print output after sorting
    printf("Bubble sort: ");

    for (i = 0; i < words; i++)
    {
        printf("%s ", name[i]);
    }

    printf("\n\n");
}