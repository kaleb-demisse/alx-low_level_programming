#include "main.h"

/**
 * print_square - print square of size 'size'
 * @size: length of a side
 *
 * Return: nothing
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
			_putchar('#');
		_putchar('\n');
	}
}
