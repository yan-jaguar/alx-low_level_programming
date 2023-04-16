#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive num,
 * followed by a new line
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments.
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a1, a2, sum = 0;

	for (a1 = 1; a1 < argc; a1++)
	{
		for (n2 = 0; argv[a1][a2]; a2++)
		{
			if (argv[a1][a2] < '0' || argv[a1][a2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[a1]);
	}
	printf("%d\n", sum);
	return (0);
}
