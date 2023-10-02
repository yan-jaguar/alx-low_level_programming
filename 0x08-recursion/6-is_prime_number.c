#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - function that returns 1 if
 * the input integer is a prime number
 * @n: number to be checked
 *
 * Return: 1 if n is prime number, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime
 * using recursion
 * @n: number to be checked
 * @i: iterator
 *
 * Return: 1 if number is prime, else 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
