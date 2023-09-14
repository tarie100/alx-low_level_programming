#include"lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: count
 * @idx: index
 * @n: ...
 * Return: new node, 0 on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *newnode, *current = *h;

	if (h == NULL || idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	/*current = h;*/
	count = 0;
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->prev = current;
	newnode->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = newnode;
	}
	current->next = newnode;
	return (newnode);
}
