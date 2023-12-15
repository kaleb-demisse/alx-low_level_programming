#include <stdio.h>

/**
 * main - print a - z
 *
 * Return: always 0
 */

int main(void)
{
	char a;

	a = 'a';
	do {
		putchar(a);
		a = a + 1;
	} while (a <= 'z');

	a = 'A';
	do {
		putchar(a);
		a = a + 1;
	} while (a <= 'Z');
	putchar('\n');

	return (0);
}
