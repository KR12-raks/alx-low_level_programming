#include "main.h"
/**
 * print_diagonal - print diahgonal lines
 *
 * @n: no of inputs
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (n > 1)
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\\');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}

