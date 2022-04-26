#include "lists.h"

/**
 * get_nodeint_at_index - returns the sum of all the data (n) of a listint_t linked list
 *
 * @head: address to linked list
 *
 * Return: returns sum or 0 if linked list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	unsigned int i;

	if (head == NULL)
		return (0);
	else
	{
		for (i = 0; head != NULL; i++)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
