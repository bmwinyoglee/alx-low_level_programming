#include "lists.h"


/**
 * listint_len - ...
 *
 * @h: ...
 * Return: ...
 */
size_t listint_len(const listint_t *h)
{
const listint_t *temp = h;
size_t count = 0;

if (h == NULL)
return (0);
while (temp != NULL)
{
count++;
temp = temp->next;
}
return (count);
}