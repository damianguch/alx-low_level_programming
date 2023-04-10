#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: input long integer
 * @index: index of the bit you want to get
 *
 * Return: value of the bit at the index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
