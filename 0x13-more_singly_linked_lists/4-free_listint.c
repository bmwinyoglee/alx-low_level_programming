#include "lists.h"

/**
 * free_listint - free a `listint_t` list
 * @head: head of linked list
 * bravo-dev
 */
void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}
