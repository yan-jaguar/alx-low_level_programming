#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments passed
 * @argv:array of programs
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
