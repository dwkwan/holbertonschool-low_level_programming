#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to dlistint_t struct
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
