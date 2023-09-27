#include "lists.h"

/**
 * free_listp - free a linked list
 * @head: pointer to the head of the list
 * Return: no return
 */

void free_listp(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while (curr != NULL)
		{
			temp = curr;
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list and detects loops
 * @head: pointer to the list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	const listint_t *hptr = NULL;

	while (head != NULL)
	{
		const listint_t *add = hptr;
		int found = 0;

		while (add != NULL)
		{
			if (head == add)
			{
				found = 1;
				break;
			}
			add = add->next;
		}
		if (found)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			free_listp((listint_t **)&hptr);
			return (nnodes);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		nnodes++;

		hptr = head;
		head = head->next;
	}

	free_listp((listint_t **)&hptr);
	return (nnodes);
}

