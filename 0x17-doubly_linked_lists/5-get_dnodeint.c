#include "lists.h"

/**
 * get_dnodeint_at_index - Return's the nth Node of a dlistint_t linked list.
 * @head: Pointer to the Head of List
 * @index: Index of Node to be Searched for, Beginging from 0
 * Return: nth Node or NULL
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
