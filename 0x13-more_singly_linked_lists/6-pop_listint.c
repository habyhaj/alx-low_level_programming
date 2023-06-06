#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to first element
 *
 * Return: n (head node’s data); 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int count;

	if (!head || !*head)
		return (0);

	count = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (count);
}
