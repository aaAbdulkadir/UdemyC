#include <stdlib.h>
#include <stdio.h>

int main()
{   
    float width, height, perimeter, area;

    printf("We are going to find the area of a rectangle, your inputs will be asked for...\nFirstly lets start with what width you would like to input: ");

    // make sure input is a positive number
    do
    {
        scanf("%f", &width);
    }
    while (width < 1);

    printf("Now input the desired height: \n");

    do
    {
        scanf("%f", &height);
    }
    while (width < 1);

    // perimeter and area
    perimeter = 2 * (width + height);
    area = width * height;

    printf("\nThrough my genius calculations, the perimeter of your rectangle is in fact... %.2f, and the area of your rectangle is ... %.2f\n", perimeter, area);
    return 0;
}