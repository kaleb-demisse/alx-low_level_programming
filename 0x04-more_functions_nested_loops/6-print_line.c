#include "main.h"

/**
 * print_line - prints a straight line followed by a new
 *              line
 * @n: length of line to be printed
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; ++i)
		_putchar('_');
	_putchar('\n');
}
