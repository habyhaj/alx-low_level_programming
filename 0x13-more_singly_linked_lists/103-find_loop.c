#include "lists.h"

/**
 * find_listint_loop - finds the loop contained in a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 * Otherwise - the address of the node where the loop starts.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ocean, *sea;

	ocean = sea = head;
	while (ocean && sea && sea->next)
	{
		ocean = ocean->next;
		sea = sea->next;
		if (ocean == sea)
		{
			ocean = head;
			break;
		}
	}
	if (!ocean || !sea || !sea->next)
		return (NULL);
	while (ocean != sea)
	{
		ocean = ocean->next;
		sea = sea->next;
	}
	return (sea);
}
