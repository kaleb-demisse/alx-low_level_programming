#include "main.h"

/**
 * print_alphabet - print lower case alphabet
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	char a;

	a = 'a';
	do {
		_putchar(a);
		a = a + 1;
	} while (a <= 'z');
	_putchar('\n');
}
