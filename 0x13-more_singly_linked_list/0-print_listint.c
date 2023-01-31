#include "lists.h"

/**
 * size_t: 
 *
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for (size_t; i = 0; i < h ->size; i++)
	{
		if (h ->element[i] == NULL)
		{
			printf("null, not a node in list\n");
		}
		else
		{
			printf("%d", h->element[i])
		}

		count++;
	}

	return (count);
}
