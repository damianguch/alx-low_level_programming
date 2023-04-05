#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of listint_t linked list
 * @head: pointer to head of list
 * @index: node index

 * Return: NULL if failed or the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	size_t k = 0;

	if (head == NULL)
		return (NULL);

	while ((k < index) && head != NULL)
	{
		head = head->next;
		k++;
	}

	if (k == index)
		return (head);

	return (NULL);
}
