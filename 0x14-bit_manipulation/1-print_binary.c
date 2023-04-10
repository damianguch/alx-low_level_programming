#include "main.h"

/**
 * print_binary -  prints the binary representation of a number
 * @n: integer to be converted to binary
 */

void print_binary(unsigned long int n)
{
	int k, option;

	if (n == 0)
		_putchar('0');

	for (option = 0, k = sizeof(n) * 8 - 1; k >= 0; k--)
	{
		if ((n >> k) & 1)
			option = 1;

		if (option == 1)
			((n >> k) & 1) ? _putchar('1') : _putchar('0');
	}
}
