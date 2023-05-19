#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list.
 * @head: pointer to head of the dlistint_t list.
 * @index: index is the index of the node, starting from 0
 *
 * Return: NULL if node does not exist or nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	/*count down until index matches*/
	for (i = 0; i = index - 1; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
