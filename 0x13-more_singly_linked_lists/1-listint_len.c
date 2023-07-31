#include "lists.h"


/**
 *listint_len - Returns the numbers
 *@h: A pointer to the head
 *Return: the elements in the listint_t list
 */

size_t listint_len(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
