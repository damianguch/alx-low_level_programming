#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: 'To print a string to the standar error'
 *
 * Return: Always 1 (Failure)
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
