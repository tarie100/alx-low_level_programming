#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * delete_nodeint_at_index -  deletes the node at index
 * @index: ..
 * @head: node
 * Return: ..
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current;
	unsigned int count;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;
	count = 0;
	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}
	temp = current->next;
	current->next = current->next->next;
	free(temp);
	return (1);
}
