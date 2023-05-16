#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: a pointer to the head of the  list.
 *
 * Return: the address of the node where the loop starts or NULL otherwise
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t, *h;

	if (head == NULL || head->next == NULL)
		return (NULL);

	t = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (t == h)
		{
			t = head;

			while (t != h)
			{
				t = t->next;
				h = h->next;
			}

			return (t);
		}

		t = t->next;
		h = (h->next)->next;
	}

	return (NULL);
}
