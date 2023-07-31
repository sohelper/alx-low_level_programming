#include "lists.h"

/**
 * insert_nodeint_at_index - returns the nth node of a linked list
 * @idx: index
 * @head: pointer
 * @n:new node
 * Return:node adress
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node = NULL;
listint_t *previous_node = NULL;
unsigned int i = 0;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL || idx > listint_len(*head))
{
free(new_node);
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
while (head != NULL)
{
if (i == idx)
{
if (i == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
new_node->next = previous_node->next;
previous_node->next = new_node;
return (new_node);
}
else if ((i + 1) == idx)
previous_node = *head;
head = &((*head)->next);
i++;
}
return (NULL);
}
/**
 * listint_len - counts the number
 * @h: head
 * Return:element number
 */
size_t listint_len(const listint_t *h)
{
const listint_t *cursor = h;
size_t count = 0;
while (cursor != NULL)
{
count += 1;
cursor = cursor->next;
}
return (count);
}
