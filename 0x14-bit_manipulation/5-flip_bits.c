#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: parameter of base number
 * @m: parameter number to transform to
 * Return: the number of bit transformations needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, result;

	result = 0;
	for (k = 8 * sizeof(n) - 1; k >= 0; k--)
		if (((n ^ m) >> k) & 1)
			result++;

	return (result);
}
