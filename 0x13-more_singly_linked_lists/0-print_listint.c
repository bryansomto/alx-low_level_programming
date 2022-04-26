#include "lists.h"

/**
 * main - check the code
 * 
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	unsigned long int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
