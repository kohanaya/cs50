#include <stdio.h>
#include <cs50.h>

bool checkSum(long in)
{
    int sum = 0;
    long n = in;

    while (n > 0)
    {
        n = n / 10;
        int t = (n % 10) * 2;
        while (t > 0)
        {
            sum += t % 10;
            t = t / 10;
        }
        n = n / 10;
    }

    n = in;
    while (n > 0)
    {
        sum += n % 10;
        n = n / 100;
    }

    return sum % 10 == 0;
}

bool isAmex(long a)
{
    return a / 10000000000000 == 34 || a / 10000000000000 == 37;
}

bool isVisa(long a)
{
    return a / 1000000000000 == 4 || a / 1000000000000000 == 4;
}

bool isMaster(long a)
{
    return a / 100000000000000 >= 51 && a / 100000000000000 <= 55;
}



int main(void)
{
    long number  = get_long("Number: ");


    if (!checkSum(number)) 
    {
        printf("INVALID\n");
    } 
    else if (isAmex(number)) 
    {
        printf("AMEX\n");
    } 
    else if (isVisa(number)) 
    {
        printf("VISA\n");
    } 
    else if (isMaster(number)) 
    {
        printf("MASTERCARD\n");
    } 
    else
    {
        printf("INVALID\n");
    }

}
