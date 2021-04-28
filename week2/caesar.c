#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

bool isUpper(char c) 
{
    return c >= 65 && c <= 90;
}

bool isLower(char c) 
{
    return c >= 97 && c <= 122;
}

int main(int argc, string argv[])
{
    
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i])) 
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    
    int n = atoi(argv[1]) % 26;

    string s = get_string("plaintext: ");

    printf("ciphertext: ");

    for (int i = 0; i < strlen(s); i++)
    {
        if (isUpper(s[i]))
        {
            printf("%c", (s[i] - 65 + n) % 26 + 65);
        }
        else if (isLower(s[i]))
        {
            printf("%c", (s[i] - 97 + n) % 26 + 97);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");



}



