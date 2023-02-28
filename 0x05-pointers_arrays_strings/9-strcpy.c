#include "main.h"

/**
 * _strlength - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlength(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}


/**
 * _strcpy - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlength(src); i++)
		dest[i] = src[i];

	return (dest);
}
