#include <stdio.h>

/**
 * main - print z - a
 *
 * Return: always 0
 */

int main(void)
{
	char a;

	a = 'z';
	do {
		putchar(a);
		a = a - 1;
	} while (a >= 'a');
	putchar('\n');

	return (0);
}
