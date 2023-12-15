#include <stdio.h>

/**
 * main - print 0 - 9
 *
 * Return: always 0
 */

int main(void)
{
	int a;

	a = '0';
	do {
		putchar(a);
		if (a < '9')
		{
			putchar(',');
			putchar(' ');
		}
		a = a + 1;
	} while (a <= '9');
	putchar('\n');

	return (0);
}
