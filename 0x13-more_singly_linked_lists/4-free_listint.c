#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * free_listint - frees a listint_t list.
 * @head: node
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
