#include "lists.h"

/**
 * insert_node - adds a node to a sorted
 * linked list.
 * @head: head node of the list.
 * @number: input integer.
 * Return: pointer to new node or NULL if failed.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	current = *head;
	if (current == NULL || current->n >= number)
	{
		new->next = current;
		current = new;
		return (new);
	}

	while (current && current->next && current->next->n < number)
		current = current->next;
	/* LINK THE NODES BACK */
	new->next = current->next;
	current->next = new;
	return (new);
}
