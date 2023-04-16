#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @a: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}
