#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet ten times
 *
 * Return: always return 0
 *
 */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)

	{	char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
