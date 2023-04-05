#include "lists.h"

/**
 * free_listint2 - frees a listint list and sets head to NULL
 * @head: head pointer parameter
 *
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *lptr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		lptr = *head;
		*head = lptr->next;
		free(lptr);
	}

}
