#include <stdio.h>
#include "main.h"

/**
 * print_array - prints array
 * @a: the array to be printed
 * @n: the number of elements to be printed
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; ++i)
		printf("%d, ", *(a + i));
	printf("%d\n", *(a + i));
}
