#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers from n to 98, ascending or descending
 *
 * @n: the starting number
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        for (; n <= 98; n++)
        {
            printf("%d", n);

            
            if (n != 98)
                printf(", ");
        }
    }
    else
    {
        for (; n >= 98; n--)
        {
            printf("%d", n);

            
            if (n != 98)
                printf(", ");
        }
    }
    printf("\n");
}

