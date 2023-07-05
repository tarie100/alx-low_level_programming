#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: node
 * @idx: index
 * @n: data
 * Return: address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *current = *head;
	unsigned int count = 0;

	if (idx == 0)
	{
		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
		{
			return (NULL);
		}
		while (current != NULL && count < idx - 1)
		{
			current = current->next;
			count++;
		}
		if (current == NULL || current->next == NULL)
		{
			return (NULL);
		}
		if (newnode == NULL)
		{
			return (NULL);
		}
		newnode->n = n;
		newnode->next = current->next;
		current->next = newnode;
	}
	return (newnode);
}
