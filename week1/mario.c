#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int level;
    do 
    {
        level = get_int("Enter the number of levels:\n");
    }
    while (level < 1 || level > 8);
    
    
    for (int i = 0; i < level; i++)
    {

        for (int j = 0; j < level; j++)
        {
            
            if (level - i - 1 > j)
            {
                
                printf(" ");
                
            }
            else
            {
                    
                printf("#");
            }
        }
        printf("\n");
    }
    
    
}



