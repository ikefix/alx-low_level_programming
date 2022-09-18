#include "main.h"
/**
 * print_triangle - prints the shape of
 *
 * @size: size of triangle
 *
 * Return: 0
 *
 */
void print_triangle(int size)
{
	int row, column, x;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
			_putchar(' ');
		for (x = row + column; x >= 1; x--)
			_putchar('#');
		_putchar('\n');
	}
}
