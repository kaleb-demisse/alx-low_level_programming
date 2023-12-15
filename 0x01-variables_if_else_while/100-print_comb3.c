#include <stdio.h>

/**
 * main - print 0 - 9
 *
 * Return: always 0
 */

int main(void)
{
	int a;
	int b;

	a = '0';
	do {
		for (b = a + 1; b <= '9'; b++)
		{
			putchar(a);
			putchar(b);
			if (a < '8' || b < '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
		a = a + 1;
	} while (a <= '8');
	putchar('\n');

	return (0);
}
