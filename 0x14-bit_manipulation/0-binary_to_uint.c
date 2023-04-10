#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int power;
	unsigned int value;
	unsigned int sum;
	const char *s;

	s = b;

	while (b >= s)
	{
		b++;
	}
	b--;

	power = 0;
	sum = 0;

	while (b >= s)
	{
		if (*b != '0' && *b != '1')
			return (0);

		if (b == NULL)
			return (0);

		i = *b - '0';
		value = i * (1 << power);
		sum = sum + value;
		b--;
		power++;
	}

	return (sum);

}
