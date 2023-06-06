#include "lists.h"

/**
 * listint_len - This really returns the number of elements in a linked lists
 * @h: This ensures the linked list of type listint_t to traverse
 *
 * Return: What is needed is to return number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
