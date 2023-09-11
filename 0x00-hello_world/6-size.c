#include <stdio.h>

/**
 * main - Prints the size of various type
 *
 * Return: 0
 */

int main(void)
{
	printf("Size of char: %a byte(s)\n", sizeof(char));
	printf("Size of int: %a byte(s)\n", sizeof(int));
	printf("Size fo long int: %a byte(s)\n", sizeof(long int));
	printf("Size of long long int: %a byte(s)\n", sizeof(long long int));
	printf("Size of float: %a byte(s)\n", sizeof(float));
	return (0);

}
