#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * pop_listint - that deletes the head node of a listint_t linked list
 * @head: node
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (data);
}
