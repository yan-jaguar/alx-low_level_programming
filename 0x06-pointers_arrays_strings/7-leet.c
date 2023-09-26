#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @s: string
 * Return: string with changed letters
 */
char *leet(char *s)
{
	char l[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(s + i) == l[j])
			{
				*(s + i) = n[j];
			}
		}
		i++;
	}
	return (s);
}
