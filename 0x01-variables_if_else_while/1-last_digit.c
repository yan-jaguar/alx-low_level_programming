#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - will assign a random number to the variable
 * Return: 0 always
 */

int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	i = n % 10;
	if (i > 5)
		printf("Last digit of %d is %d and is greater than 5", n, i);
	else if (i == 0)
		printf("Last digit of %d is %d and is 0", n, i);
	else if (i < 6 && i != 0)
		printf("Last digit of %d is %d and is less than 6 not 0", n, i);

	printf("\n");

	return (0);
}
