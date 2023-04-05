#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: list head parameter
 *
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int item;
	listint_t *t;

	if (*head == NULL)
		return (0);

	t = *head;

	item = t->n;

	*head = t->next;
	free(t);

	return (item);

}
