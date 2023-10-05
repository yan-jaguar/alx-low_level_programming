#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: storage char
 *
 * Return: pointer to array
 * 0 if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int x;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(c) * size);
	if (p == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		p[x] = c;
	return (p);
}
