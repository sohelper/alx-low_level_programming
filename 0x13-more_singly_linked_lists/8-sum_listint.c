#include "lists.h"

/**
 *sum_listint - sums data in a linked list
 *@head: head
 *Return:the sum
 */

int sum_listint(listint_t *head)
{
listint_t *cursor = head;
size_t sum = 0;

while (cursor != NULL)
{
sum += cursor->n;
cursor = cursor->next;
}
return (sum);
}
