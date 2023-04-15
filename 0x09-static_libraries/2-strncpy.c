#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @v: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int v)
{
	int j;

	j = 0;
	while (j < v && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < v)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

