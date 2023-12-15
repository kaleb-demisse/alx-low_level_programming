#include <unistd.h>
#include <string.h>

/**
 * main - prints a string using write
 *
 * Return: always 1
 */

int main(void)
{
	char *str;
	int len;

	str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	len = strlen(str);
	write(1, str, len);

	return (1);
}
