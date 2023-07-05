#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: node
 * @index: index
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
