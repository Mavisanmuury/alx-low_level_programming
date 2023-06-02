#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - This is clearly a singly linked list
 * @str: string - considering a type of string(malloc'ed string)
 * @len: The length of the string has to be looked at
 * @next: points to the next node in this question
 *
 * Description: singly linked list node structure definately
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
