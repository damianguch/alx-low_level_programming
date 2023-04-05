#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at anindex of a listint_t list.
 * @head: pointer to head of the linked list
 * @index: index of the node that should be deleted.
 *
 * Return: 1 if success, or -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	size_t k = 0;
	listint_t *t, *t2;

	if (*head == NULL)
		return (-1);

	t = *head;

	if (index == 0)
	{
		*head = t->next;
		free(t);
		return (1);
	}

	while (k < (index - 1) && t != NULL)
	{
		t = t->next;
		k++;
	}

	if (k != (index - 1) || t->next == NULL)
		return (-1);

	t2 = t->next;
	t->next = (t->next)->next;

	free(t2);

	return (1);
}
