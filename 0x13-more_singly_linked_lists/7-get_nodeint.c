#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of linked list
 * @index: index of node to return
 * Return: pinter to nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *temp = head;

	while (temp && x < index)
	{
		temp = temp->next;
		x++;
	}
	return (temp ? temp : NULL);
}
