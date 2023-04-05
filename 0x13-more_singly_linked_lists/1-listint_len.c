#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: list
 * Return: number of nodes in list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes += 1;
		h = h->next;
	}

	return (nodes);
}
