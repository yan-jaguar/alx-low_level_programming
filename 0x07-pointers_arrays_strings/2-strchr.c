#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 * @s: string to locate first occurence of c
 * @c: character to locate
 * 
 * Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; 1 ; i++)
	{
		if (s[i] == c)
			return ((s + i));
		if (s[i] == 0)
			break;
	}
	return (NULL);
}
