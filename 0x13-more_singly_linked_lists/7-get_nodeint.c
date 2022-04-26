#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: address to linked list
 * @index: nth node (node index)
 *
 * Return: returns the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			temp = head;
		head = head->next;
	}
	return (temp);
}
