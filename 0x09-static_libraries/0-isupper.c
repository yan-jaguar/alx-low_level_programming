#include "main.h"
/**
 * _isupper - checks for uppercase characters
 *@c: parameter to be checked
 *Return: 1 on  success else 0
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
