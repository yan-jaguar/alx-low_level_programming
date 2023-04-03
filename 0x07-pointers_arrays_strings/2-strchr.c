#include <stdio.h>
#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string to locate the occurence of j
 * @j: character to locate
 * Return: returns a pointer to the first occurence of j
 */
char *_strchr(char *s, char j)
{
	int i;

	for (i = 0; 1 ; i++)
	{
		if (s[i] == j)
			return ((s + i));
		if (s[i] == 0)
			break;
	}
	return (NULL);
}
