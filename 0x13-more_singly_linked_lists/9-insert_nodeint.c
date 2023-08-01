#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the ponter
 * @idx: the index of the list where the new node should be added.
 * @n: the integer number
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *prev_node = NULL, *current = *head;
unsigned int i = 0;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);


new_node->n = n;

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
while (current != NULL)
{
if (i == idx)
{
prev_node->next = new_node;
new_node->next = current;
return (new_node);
}
prev_node = current;
current = current->next;
i++;
}
free(new_node);
return (NULL);
}
