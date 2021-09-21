#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: char to initialize
 * Return: pointer to the array initialized or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *b = malloc(size);

	if (size == 0 || b == 0)
		return (0);

	while (size--)
		b[size] = c;

	return (b);
}
