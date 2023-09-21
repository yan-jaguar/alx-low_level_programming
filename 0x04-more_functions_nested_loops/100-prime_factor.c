#include <stdio.h>
#include "main.h"
#include "math.h"

/**
 *main - print prime factors
 *Return: 0
 */

int main(void)
{

	long int l;
	long int max;
	long int i;

	l = 612852475143;
	max = -1;

	while (l % 2 == 0)
	{
		max = 2;
		l /= 2;
	}

	for (i = 3; i <= sqrt(l); i = i + 2)
	{
		while (l % i == 0)
		{
			max = i;
			l = l / i;
		}
	}

	if (l > 2)
		max = l;

	printf("%ld\n", max);

	return (0);
}
