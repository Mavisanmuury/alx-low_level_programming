#include "lists.h"

/**
 * reverse_listint - This ensures that a linked list is reveresed
 * @head: This serves as a pointer to the first node in the list
 *
 * Return: This has to also return pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
