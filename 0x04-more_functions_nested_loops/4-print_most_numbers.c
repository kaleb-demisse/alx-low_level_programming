#include "main.h"

/**
 * print_most_numbers - print numbers from 1 to 9
 *                      without 2 and 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; ++i)
		if (i != 2 && i != 4)
			_putchar(i + 48);
	_putchar('\n');
}
