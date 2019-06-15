#include "sort.h"
#include<stdio.h>

/**
 * insertion_sort_list - sorts a doubly linked list  of integers in ascending
 * order using the Insertion sort algorithm
 *
 * @list: pointer to doubly-linked list
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = (*list)->next;
	listint_t *tmp = NULL;
	listint_t *hold = NULL;

	while (current->next)
	{
		tmp = current->prev;
		hold = current->next;
		while (tmp->n > current->n)
		{
			current->prev = tmp->prev;
			tmp->next = current->next;
			if (tmp->prev)
				tmp->prev->next = current;
			tmp->prev = current;
			current->next->prev = tmp;
			current->next = tmp;
			print_list(*list);
			tmp = current->prev;
		}
		current = hold;
	}
}
