#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - At the beginning of a linked list we have addition of a new node
 * @head: There is clearly a double pointer to the list_t list
 * @str: There should be a new string to add in the node
 *
 * Return: without question the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
