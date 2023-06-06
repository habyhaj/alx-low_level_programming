#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head of linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nnod = 0;	/* where nnod refers number of nodes */

	while (h)
	{
		printf("%d\n", h->n);
		nnod++;
		h = h->next;
	}
	return (nnod);
}
