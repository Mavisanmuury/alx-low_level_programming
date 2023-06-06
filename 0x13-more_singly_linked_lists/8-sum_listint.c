#include "lists.h"

/**
 * sum_listint - This really calculates the sum of all the data
 * in a listint_t list to makes sure it works fine
 * @head: This ensures the first node in the linked list
 * Return: Definately giving the resulting sum as a return
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
