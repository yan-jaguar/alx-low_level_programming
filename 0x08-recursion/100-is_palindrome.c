#include "main.h"

/**
 * _strlen_recursion - size
 * @a: pointer to string parameter
 * Return: recursion
 */

int _strlen_recursion(char *a)
{
	if (*a == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(a + 1));
}

/**
 * pali - palindrome
 *  @a: pointer to string
 *  @p: position
 *  Return: boolean
 */
int pali(char *a, int p)
{
	if (p < 1)
	{
		return (1);
	}
	if (*a == *(a + p))
	{
		return (pali(a + 1, p - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @a: pointer to string.
 * Return: recursion
 */

int is_palindrome(char *a)
{
	int len = _strlen_recursion(a);

	return (pali(a, len - 1));
}
