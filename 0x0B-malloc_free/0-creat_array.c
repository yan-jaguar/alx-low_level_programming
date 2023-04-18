#include <stdlib>

/**
 * create_array - creates an array of char
 * @size: size of the array.
 * @c: the char.
 * Return: pointer to array,NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *d;
	unsigned int e;

	if (size == 0)
		return (NULL);
	d = malloc(sizeof(c) * size);
	if (d == NULL)
		return (NULL);
	for (e = 0; e < size; e++)
		d[e] = c;
	return (d);
}
