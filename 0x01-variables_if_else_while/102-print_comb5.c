#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int tens;
	int units;

	for (tens = 0; tens <= 98; tens++)
	{
		for (units = tens + 1; units <= 99; units++)
		{
			putchar((tens / 10) + '0');
			putchar((tens % 10) + '0');
			putchar(' ');
			putchar((units / 10) + '0');
			putchar((units % 10) + '0');

			if (tens == 98 && units == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

