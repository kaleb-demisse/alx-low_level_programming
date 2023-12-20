#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet 10 times
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i < 10; i++)
	{
		a = 'a';
		do {
			_putchar(a);
			a = a + 1;
		} while (a <= 'z');
		_putchar('\n');
	}
}
