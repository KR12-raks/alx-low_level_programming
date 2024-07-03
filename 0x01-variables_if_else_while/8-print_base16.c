#include <stdio.h>
/**
 * main - prints hexadecimal numbers
 *
 * Return: (0)
 *
 */
int main(void)
{
	char numbers = '0';
	char letters = 'a';

	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}
	while (letters <= 'f')
	{
		putchar(letters);
		numbers++;
	}
	putchar('\n');
	return (0);
}
