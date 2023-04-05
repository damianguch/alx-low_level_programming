#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the list_t list head.
 *
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t objects = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		objects++;
		h = h->next;
	}

	return (objects);
}
