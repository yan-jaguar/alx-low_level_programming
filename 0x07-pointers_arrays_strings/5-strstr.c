#include <stdio.h>
#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @s: the string to be tested
 * @ss: the substring to be searched for
 * Return: returns a pointer to the beginning of the
 * located substring, or NULL if the substring is not found
 */
char *_strstr(char *s, char *ss)
{
	int a, b = 0, c;

	for (a = 0; s[a] != 0; a++)
	{
		c = a;
		b = 0;
		for (; ss[b] != 0;)
		{
			if (s[c++] == ss[b++])
			{
				continue;
			}
			break;
		}
		if (ss[b] == '\0')
			return ((s + a));
	}
	return (NULL);
}
