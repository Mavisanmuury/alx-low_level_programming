#include "lists.h"

/**
 * add_nodeint - This adds a new node right at the beginning of a linked list
 * @head: This also functions as a pointer to the first node in the list
 * @n: This ensure the data to insert in that new node
 *
 * Return: Surely serves as a pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
