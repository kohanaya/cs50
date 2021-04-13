#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int startNumber;
    do
    {
        startNumber = get_int("Enter start number: ");
    }
    while (startNumber < 9);


    int endNumber;
    do
    {
        endNumber = get_int("Enter end number: ");
    }
    while (endNumber < startNumber);


    int n = startNumber;
    int years = 0;
    for (; n < endNumber; years++)
    {
        n = n + (n / 3) - (n / 4);
    }

    printf("Years: %i\n", years);

}
