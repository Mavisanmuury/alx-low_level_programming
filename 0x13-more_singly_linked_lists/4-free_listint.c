#include "lists.h"

/**
 * free_listint - This ensures that it frees a linked list
 * @head: listint_t list has to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
