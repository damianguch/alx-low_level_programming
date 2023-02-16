#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char name;
	int age;
	long number;
	long long large;
	float amount;

	printf("Size of a char: %lu bytes(s)\n", sizeof(name));
	printf("Size of a int: %lu bytes(s)\n", sizeof(age));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(number));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(large));
	printf("Size of a float: %lu bytes(s)\n", sizeof(amount));

	return (0);
}
