#include <stdio.h>

/**
 * main - print all possible different two digit combs
 *
 * Return: always 0
 */

int main(void)
{
	int a;
	int b;

	a = 0;
	do {
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) + 48);
			putchar((a % 10) + 48);
			putchar(' ');
			putchar((b / 10) + 48);
			putchar((b % 10) + 48);
			if (a < 98 || b < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
		a = a + 1;
	} while (a <= 98);
	putchar('\n');

	return (0);
}
