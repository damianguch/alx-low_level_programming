#include "main.h"
#include <stdio.h>

/**
 * get_endianness - This function checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int n;
	char *c;

	n = 1;
	c = (char *)(&n);

	if (*c == 1)
		return (1);
	else
		return (0);
}
