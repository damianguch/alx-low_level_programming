#include "main.h"

/**
 *_memcpy - a function that copies memory area
 *@dest: destination memory area
 *@src: source memory area
 *@n: number of memory bytes
 *
 *Return: A pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
