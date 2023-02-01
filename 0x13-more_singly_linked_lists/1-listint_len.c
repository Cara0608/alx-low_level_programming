#include "list.h"

/**
 * listint_len - Returns the number of elements in a linked lists
 * @h: pointer to thr 1st node of the linked list
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodenum = 0;

	while (h)
	{
		nodenum++;
		h = h->next;
	}
	return (nodenum);
}
