// declare a structure pointer and pass it through a function

#include <stdio.h>
#include <stdlib.h>

struct item
{
    char *itemName;
    int quantity;
    float price;
    float amount; // amount = quantity * price
};

void readItem(struct item *i);
void printItem(struct item *i);


int main(void)
{
    struct item itm;
    struct item *pItm;

    pItm = &itm;

    pItm->itemName = (char *) malloc(30 * sizeof(char));

    // NULL
    if (pItm == NULL)
    {
        exit(-1);
    }

    // read item
    readItem(pItm);

    // print item
    printItem(pItm);

    // free memory
    free(pItm->itemName);
}

void readItem(struct item *i)
{
    printf("Enter product name: ");
    scanf("%s", i->itemName);

    printf("Enter price: ");
    scanf("%f", &i->price);

    printf("Enter quantity: ");
    scanf("%d", &i->quantity);

    i->amount = (float)i->quantity * i->price;

}

void printItem(struct item *i)
{
    printf("\nName : %s", i->itemName);
    printf("\nPrice : %.2f", i->price);
    printf("\nQuantity: %d", i->quantity);
    printf("\nTotal amount: %.2f\n\n", i->amount);
}