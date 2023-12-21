#include "main.h"

/**
 * print_diagonal - print diagonal with n as length
 * @n: length of diagonal
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; ++i)
		for (j = 0; j <= i; ++j)
			if (j == i)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
				_putchar(' ');
}
