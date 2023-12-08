#include "lists.h"

/**
 * sum_dlistint - Return's the Sum of All The Data (n)
 * of Doubly Linked List
 *
 * @head: Head of The List
 * Return: Sum of Data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
