#include <stdio.h>

/**
 * main - print base 16 numbers
 *
 * Return: always 0
 */

int main(void)
{
	char a;

	a = '0';
	do {
		putchar(a);
		a = a + 1;
	} while (a <= '9');

	a = 'a';
	do {
		putchar(a);
		a = a + 1;
	} while (a <= 'f');
	putchar('\n');

	return (0);
}
