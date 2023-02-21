#include "main.h"

/**
 * print_alphabet - Function prints the alphabets in lowercase
 *
 * Description: The function prints the lowercase alphabets
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');

}
