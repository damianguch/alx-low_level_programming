#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d bytes(s)\n", sizeof(char));
	printf("Size of a int: %d bytes(s)\n", sizeof(int));
	printf("Size of a long: %d bytes(s)\n", sizeof(long));
	printf("Size of a long long: %d bytes(s)\n", sizeof(long long));
	printf("Size of a float: %d bytes(s)\n", sizeof(float));
	return (0);
}
