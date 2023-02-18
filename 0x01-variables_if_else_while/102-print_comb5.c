#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int tens;
	int units;
	int t;
	int u;

	for (tens = '0'; tens <= '9'; tens++) /*print first two digit combo*/
	{
		for (units = '0'; units <= '9'; units++)
		{
			for (t = tens; t <= '9'; t++) /*print second of pair*/
			{
				for (u = tens + 1; u <= '9'; u++)
				{
					putchar(tens);
					putchar(units);
					putchar(' ');
					putchar(t);
					putchar(u);

					if (!((tens == '9' && units == '8') &&
					      (t == '9' && u == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}

				u = '0';

			}
		}
	}
	putchar('\n');

	return (0);
}
