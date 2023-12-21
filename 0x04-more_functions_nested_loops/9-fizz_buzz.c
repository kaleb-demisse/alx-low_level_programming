#include <stdio.h>

/**
 * main - fizz buzz
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; ++i)
	{
		if (i % 3 && i % 5)
			printf("%d", i);
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i != 100)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
