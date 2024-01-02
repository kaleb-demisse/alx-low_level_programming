#include "main.h"

/**
 * swap_int - swap the value of two variables
 * @a: variable to be swapped
 * @b: variable to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
