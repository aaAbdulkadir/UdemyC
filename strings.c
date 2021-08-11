#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// function declaration
int stringCount(const char string[]);
void concatenation(char result[], char str1[], char str2[]);
bool stringEqual (const char s1[], const char s2[]);

int main(void)
{
    // function 1 -----------------------------------------------------------
    printf("\n##### First function #####\n");

    // user input
    char text[100];
    printf("Enter text: ");
    fgets(text, 100, stdin);

    // output
    printf("There are %d characters in your string. \n", stringCount(text));

    // function 2 -----------------------------------------------------------
    printf("\n##### Second function #####\n");

    // declaration of variables
    char result[100];
    char str1[100];
    char str2[100];

    // user input
    printf("Enter text for string 1: ");
    fgets(str1, 100, stdin);
    printf("Enter text for string 2: ");
    fgets(str2, 100, stdin);

    // as function is void, it has to be called rather than putting it inside print
    concatenation(result, str1, str2);
    printf("Concatenation: %s\n", result);

    // function 3 -----------------------------------------------------------
    printf("##### Third function #####\n");

    // declaration of variables
    char s1[100];
    char s2[100];

    // user input
    printf("Enter text for string 1: ");
    fgets(s1, 100, stdin);
    printf("Enter text for string 2: ");
    fgets(s2, 100, stdin);

    // compare strings
    printf("%d\n\n", stringEqual(s1, s2));
}

// write a function to count the number of characters in a string without strlen
int stringCount (const char string[])
{
    // declaration of count
    int count = 0;

    // calculate characters
    while (string[count] != '\0')
    {
        ++count;
    }

    return count - 1;
}

// write a function to concatenate two character strings without strcat
void concatenation(char result[], char str1[], char str2[])
{
    // declaration
    int i, j;

    // string 1
    for (i = 0; str1[i] != '\0'; i++)
    {
        result[i] = str1[i];
    }

    // add NULL terminator to stop break from fgets (DOESNT WORK :( )
    result[strlen(result) - 1] = '\0';

    // string 2
    for (j = 0; str2[j] != '\0'; j++)
    {
        // adds j onto string i i.e. starts from the i^th character
        result[i + j] = str2[j];
    }

    // add NULL terminator
    result[i + j] = '\0';
}

// write a function that determines if two strings are equal 
bool stringEqual (const char s1[], const char s2[])
{
    // declaration
    int i = 0;
    bool isEqual = false;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        i++;
    }

    if (s1[i] == '\0' && s2[i] == '\0')
    {
        isEqual = true;
    }
    else
    {
        isEqual = false;
    }

    return isEqual;
}