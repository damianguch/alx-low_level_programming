#include "main.h"

/**
 * print_alphabet_x10 -  Prints the letters of the alphabets 10 times.
 *
 * Description: Function to print the lowercase alphabets ten times
 *
 * Return: Returns void.
 */


void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

