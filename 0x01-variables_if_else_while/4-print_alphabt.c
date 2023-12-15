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
		if (a != 'e' && a != 'q')
			putchar(a);
		a = a + 1;
	} while (a <= 'z');
	putchar('\n');

	return (0);
}
