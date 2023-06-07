#include "lists.h"
/**
* free_listint_safe - frees a listint_t list.
* @h: pointer to the first node
*
* Return: size of freed list
*/
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	int m;

	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		m = *h - (*h)->next;

		if (m > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			num++;
		}
		else
		{
			free(*h);
			*h = NULL;
			num++;
			break;
		}
	}
	*h = NULL;

	return (num);
}
