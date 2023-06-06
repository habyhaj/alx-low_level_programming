#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of linked list
 * @head: first node in linked list
 *
 * Return: sum of data in linked list; 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
