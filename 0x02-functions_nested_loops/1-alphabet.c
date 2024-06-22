#include "main.h"
/**
 * print_alphabet(void)- prints alphabets
 *
 */

void print_alphabet(void)
{
	char Alpha;

	Alpha = 'a';
	while (Alpha <= 'z')
	{
		_putchar(Alpha);
		Alpha++;
	}
	_putchar('\n');
}
