#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of the multiplication
 * @argc: number of arguments supplied to program
 * @argv: array of pointers to the program
 * Return: 0 if program receives two arguments
 * 1 if program does not receive two arguments
 */

int main(int argc, char *argv[])
{
	int n1, n2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	result = n1 * n2;
	printf("%d\n", result);
	return (0);
}
