#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: pointer to head of the linked list
 * @idx: index of the list where the new node should be added
 * @n: n paramater
 *
 * Return: address of new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	size_t k = 0;
	listint_t *newNode, *t;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	t = *head;
	while (k < (idx - 1))
	{
		t = t->next;
		k++;

		if (t == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}

	newNode->next = t->next;
	t->next = newNode;
	return (newNode);
}
