#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: the string to be printed
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	s--;
	while (count != 0)
	{
		_putchar(*s);
		s--;
		count--;
	}
	_putchar('\n');
}
