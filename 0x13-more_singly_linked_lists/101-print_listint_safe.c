#include "lists.h"

/**
 * number_unique_nodes - checks number of unique nodes
 * @head: A pointer to the head of the linked list
 *
 * Return: The countof unique nodes in list
 */
int number_unique_nodes(const listint_t *head)
{
	int c = 0;
	const listint_t *book, *pencil;

	book = pencil = head;

	while (book != NULL && pencil != NULL)
	{
		book = book->next;
		pencil = pencil->next->next;
		c++;

		if (book == pencil)
		{
			book = head;
			while (book != pencil)
			{
				book = book->next;
				pencil = pencil->next;
				c++;
			}
			return (c);
		}
	}
	return (0);
}

/**
 * iterate - checks if there's a loop in linked list
 * @head: A pointer to head of linked list
 *
 * Return: 1 if loop and 0 if none
 */

int iterate(const listint_t *head)
{
	const listint_t *book, *pencil;

	book = pencil = head;

	while (book != NULL && pencil != NULL)
	{
		book = book->next;
		pencil = pencil->next->next;

		if (pencil == pencil)
			return (1);
	}
	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to head of the linked list
 *
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	int c = 0;
	int lf;
	size_t nodes_count = 0;
	const listint_t *t;

	if (head == NULL)
		exit(98);

	lf = iterate(head);

	if (lf == 1)
	{
		c = number_unique_nodes(head);
		for (lf = 0; lf < c; lf++)
		{
			printf("[%p] %d\n", (void *)t, t->n);
			nodes_count += 1;
			t = t->next;
		}
	}

	else if (lf == 0)
	{
		t = head;
		while (t != NULL)
		{
			printf("[%p] %d\n", (void *)t, t->n);
			nodes_count += 1;
			t = t->next;
		}
	}

	return (nodes_count);
}
