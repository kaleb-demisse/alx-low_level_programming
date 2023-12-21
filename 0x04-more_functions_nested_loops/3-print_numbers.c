#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: nothing
 */

void print_numbers(void)
{
	char a;

	a = '0';
	do {
		_putchar(a);
		a = a + 1;
	} while (a <= '9');
	_putchar('\n');
}
