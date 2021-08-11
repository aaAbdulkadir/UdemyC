// dynamic memory allocation

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int size;
    char *text = NULL;

    printf("Enter limit of the text: ");
    scanf("%d", &size);

    // memory allocation

    text = (char *) malloc(size * sizeof(char));

    if (text != NULL)
    {
        printf("Enter some text: ");
        scanf(" ");
        gets(text);

        printf("Input text is: %s\n", text);
    }

    free(text);
    text = NULL;
}