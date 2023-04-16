#include "main.h"
/**
 * _strstr - locates a substring
 * @hay: string to search in
 * @needle: substring to look for
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *hay, char *needle)
{
	int x, y;

	for (x = 0; hay[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (hay[x + y] != needle[y])
				break;
		}
		if (!needle[y])
			return (&hay[x]);
	}
	return (0);
}
