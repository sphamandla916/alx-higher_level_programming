#include "lists.h"

/**
 * check_cycle - checks for a loop in a
 * singly linked list.
 * @list: head node of the list.
 * Return: 0 if no cycle exists, otherwise 1.
 */
int check_cycle(listint_t *list)
{
	listint_t *store;

	store = list;
	while (list != NULL)
	{
		list = list->next;
		/* CHECK FOR CYCLE EXISTENCE */
		if (list == store)
			return (1);
	}
	/* RETURN 0 BY DEFAULT */
	return (0);
}
