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
        printf("Usage: ./substitution key\n");
        return 1;
    }
    
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isalpha(argv[1][i])) 
        {
            printf("Key must contains only alphabetic characters.\n");
            return 1;
        }
    }
    
    if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    
    
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        for (int j = i + 1; j < strlen(argv[1]); j++)
        {
            if (argv[1][i] == argv[1][j]) 
            {
                printf("Key must not contain repeated characters.\n");
                return 1;  
            }
        }
    }

    string s = get_string("plaintext: ");

    printf("ciphertext: ");

    for (int i = 0; i < strlen(s); i++)
    {
        if (isUpper(s[i]))
        {
            int a = s[i] - 'A';
            printf("%c", toupper(argv[1][a]));
        }
        else if (isLower(s[i]))
        {
            int a = s[i] - 'a';
            printf("%c", tolower(argv[1][a]));
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");


}
