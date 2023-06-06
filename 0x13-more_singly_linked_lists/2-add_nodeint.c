#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the first node in the list
 * @n: value stored in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nlt;		/* where nlt is new element */

	nlt = malloc(sizeof(listint_t));

	if (!nlt)
		return (NULL);
	nlt->n = n;
	nlt->next = *head;
	*head = nlt;

	return (nlt);
}
