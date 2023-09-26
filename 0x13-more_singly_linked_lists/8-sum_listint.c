#include "lists.h"

/**
 * sum_listint - sum up all the data of a list
 * @head: pointer to the list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
