#include "main.h"


/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 * @n: number to be calculated on
 *
 *Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural square
 * root of a number
 * @i: int
 * @n: number to calulate the square root of
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int i, int n)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
