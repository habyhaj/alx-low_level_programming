#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head of linked list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nnod = 0;

	while (h)
	{
		nnod++;
		h = h->next;
	}
	return (nnod);
}
