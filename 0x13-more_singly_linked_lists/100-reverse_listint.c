#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the head of the linked list
 *
 * Return: The pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *backward, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	backward = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = backward;
		backward = *head;
		*head = next;
	}
	(*head) = backward;

	return (*head);
}
