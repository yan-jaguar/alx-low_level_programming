#include <stdio.h>
/**
 * main - Prints multiplication of two numbers, followed by a new line.
 * @argc: number of arguments
 * @argv: array of pointers
 *      * Return: If the program receives two arguments - 0.
 * Otherwise - 1.
 */

int main(int argc, char *argv[])
{
	int a1, a2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a1 = atoi(argv[1]);
	a2 = atoi(argv[2]);
	result = a1 * a2;
	printf("%d\n", result);
	return (0);
}
