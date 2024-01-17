#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a
 *                specific char
 * @size: size of array
 * @c: the char to be intialized with
 *
 * Return: a pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; ++i)
		*(array + i) = c;
	return (array);
}
