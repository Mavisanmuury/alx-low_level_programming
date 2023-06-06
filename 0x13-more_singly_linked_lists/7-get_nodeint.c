#include "lists.h"

/**
 * get_nodeint_at_index - This is the node return at a certain index
 * in a linked list
 * @head: This ensures the first node in the linked list
 * @index: This ensures the index of the node to return
 * Return: This gives the pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
