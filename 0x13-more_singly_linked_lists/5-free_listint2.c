#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * free_listint2 - frees a listint_t list
 * @head: ..
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while ((current = *head) != NULL)
	{
		current = *head;
		*head = current->next
		free(current);
	}
	*head = NULL;
}
