// counting arrays in a string using pointers

#include <stdlib.h>
#include <stdio.h>

int stringLength(const char *string); // changes value of pointer not address

int main(void)
{
    printf("%d \n", stringLength("stringLength test"));
    printf("%d \n", stringLength(""));
    printf("%d \n", stringLength("Abdulkadir"));
}

int stringLength(const char *string)
{
    const char *lastAddress = string;

    while (*lastAddress) // does this until it sees a NULL terminator then breaks while loop
    {
        ++lastAddress; // increment through the string and add one to the counter
    }

    return lastAddress - string; // last address - first address i.e. last letter - first letter 
}