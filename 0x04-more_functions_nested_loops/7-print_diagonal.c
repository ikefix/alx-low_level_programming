#include "main.h"
/**
 * print_diagonal - print diagonal
 *
 * @n: parameter
 *
 * Return: 0
 *
 */
void print_diagonal(int n)
{
	int i, j;

	c = 0;

	while (n > 0)
	{
		d = c;
		while (d > 0)
		{
			_putchar(32);
			d--;
		}
		_putchar(92);
		_putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
	{
		_putchar(10);
	}
}


