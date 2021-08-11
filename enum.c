#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum company {Google, Facebook, Xerox, Yahoo, Ebay, Microsoft};

    enum company xerox = Xerox;
    enum company google = Google;
    enum company facebook = Facebook;

    printf("Xerox is in the list at position %d, Google at %d and Facebook at %d\n", xerox, google, facebook);
    
    return 0;
}