#include "lists.h"

/**
 * pop_listint - Delete the head node of our `listint_t` linked list
 * @head: double pointer to head node of linked list
 * Return: head nodes data `n`
 * bravo-dev
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *hold;

	if (*head == NULL)
		return (0);

	hold = *head;
	num = hold->n;
	*head = hold->next;
	free(hold);

	return (num);
}
