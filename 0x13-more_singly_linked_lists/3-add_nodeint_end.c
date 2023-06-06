#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the first element in the list
 * @n: value stored in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nlt;
	listint_t *temp = *head;

	nlt = malloc(sizeof(listint_t));
	if (!nlt)
		return (NULL);

	nlt->n = n;
	nlt->next = NULL;

	if (*head == NULL)
	{
		*head = nlt;
		return (nlt);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = nlt;

	return (nlt);
}
