#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int length = 0; 
	unsigned int i;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	while (b[length] != '\0')
		length++;
	length -= 1;

	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (sum);

		if (b[i] == '1')
			sum += (1 * (1 << length));
		i++;
		length--;
	}

	return (sum);
}
