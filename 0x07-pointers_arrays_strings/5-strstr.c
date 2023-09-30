#include <stdio.h>

/**
 * _strstr -  function that locates a substring
 * @haystack: string tobe tested
 * @needle: substring to be searched for
 *
 * Return: pointer to the beginning
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, a;

	for (i = 0; haystack[i] != 0; i++)
	{
		a = i;
		j = 0;
		for (; needle[j] != 0; )
		{
			if (haystack[a++] == needle[j++])
			{
				continue;
			}
			break;
		}
		if (needle[j] == '\0')
			return ((haystack + i));
	}
	return (NULL);

}
