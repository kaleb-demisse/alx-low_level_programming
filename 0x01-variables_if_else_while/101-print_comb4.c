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
	int c;

	a = '0';
	do {
		for (b = a + 1; b <= '8'; b++)
		{
			for (c = b + 1; c <= '9'; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a < '7' || b < '8' || c < '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		a = a + 1;
	} while (a <= '7');
	putchar('\n');

	return (0);
}
