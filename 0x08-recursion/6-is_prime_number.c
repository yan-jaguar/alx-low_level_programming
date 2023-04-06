#include "main.h"

int prime_number(int x, int y);
/**
 * is_prime_number - function that checks if an input integer is prime.
 * @x: number to be checked.
 * Return: return 1 if the input integer is prime, otherwise return 0
 */

int is_prime_number(int x)
{
	if (x <= 1)
		return (0);
	return (prime_number(x, x - 1));
}

/**
 * prime_number - function that checks if a number is prime using recursion
 * @x: the number to be checked
 * @y: a variable used to iterate
 * Return: returns 1 if the number is prime and 0 otherwise
 */
int prime_number(int x, int y)
{
	if (y == 1)
	{
		return (1);
	}
	if (x % y == 0 && y > 0)
	{
		return (0);
	}
	return (prime_number(x, y - 1));
}
