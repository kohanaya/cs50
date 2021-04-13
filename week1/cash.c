#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    do
    {
        change = get_float("Change owed: ");
    }
    while (change < 0.00);
    
    
    int cents = round(change * 100);
    
    int count = 0;
    
    while (cents > 24) 
    {
        cents = cents - 25;
        count++;
    }
    while (cents > 9) 
    {
        cents = cents - 10;
        count++;
    }
    while (cents > 4) 
    {
        cents = cents - 5;
        count++;
    }
    count = cents + count;
    
    printf("Change: %d\n", count);
}
