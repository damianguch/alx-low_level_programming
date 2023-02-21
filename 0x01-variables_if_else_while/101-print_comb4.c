#include <stdio.h>

/**
 *main - print all combinations of three different digits
 *Return: Always 0 (Success)
 */

int main(void)
{
	int units;
	int tens;
	int hundred;

	for (hundred = '0'; hundred <= '9'; hundred++) /*hundreds place*/
	{
		for (tens = (hundred + 1); tens <= '9'; tens++) /*tens=100s+1*/
		{
			for (units = (tens + 1); units <= '9'; units++) /*units*/
			{
				putchar(hundred);
				putchar(tens);
				putchar(units);
				if (hundred != '7' || tens != '8' || units != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
