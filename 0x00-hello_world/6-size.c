#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %u bytes(s)\n", sizeof(char));
	printf("Size of an int: %u bytes(s)\n", sizeof(int));
	printf("Size of a long int: %u bytes(s)\n", sizeof(long));
	printf("Size of a long long int: %u bytes(s)\n", sizeof(long long));
	printf("Size of a float: %u bytes(s)\n", sizeof(float));

	return (0);
}
