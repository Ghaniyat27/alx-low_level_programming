#include "lists.h"

/**
 * free_dlistint - Free's a dlistint_t list.
 * @head: Pointer to Head of the List
 * Return: nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
