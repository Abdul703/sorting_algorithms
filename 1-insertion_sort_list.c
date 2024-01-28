#include "sort.h"


listint_t *head_node(listint_t *temp);

/**
 * insertion_sort_list - Sorts a doubly linked list of integers using
 * insertion sorting algorithm
 *
 * @list: The doubly linked list
 *
 * Return: Void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp_node, *prev_node;

	if (list == NULL)
		return;

	current = head_node(*list);

	for (current = current->next; current;)
	{
		temp_node = current->next;
		while (current->prev && current->n < current->prev->n)
		{
			prev_node = current->prev;
			prev_node->next = current->next;
			current->prev = prev_node->prev;
			prev_node->prev = current;
			current->next = prev_node;
			if (prev_node->next)
				prev_node->next->prev = prev_node;
			if (current->prev)
				current->prev->next = current;
			print_list(head_node(*list));
		}
		current = temp_node;
	}
	*list = head_node(*list);
}


/**
 * head_node - Gets the head of a doubly linked list
 *
 * @current: node in linked list
 *
 * Return: head of linked list
 */

listint_t *head_node(listint_t *current)
{
	while (current->prev)
		current = current->prev;

	return (current);
}
