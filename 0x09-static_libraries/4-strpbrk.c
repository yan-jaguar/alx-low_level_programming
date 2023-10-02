#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string to search
 * @accept: string with pattern to match
 *
 * Return: pointer to byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				return ((s + i));
			}
		}
	}
	return (NULL);
}
