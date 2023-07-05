#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to first node
 * @n: count
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode, *current;

newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
		{
			return (NULL);
		}
newnode->n = n;
newnode->next = NULL;
current = *head;
if (current == NULL)
{
*head = newnode;
}
else
{
while (current->next != NULL)
{
current = current->next;
}
current->next = newnode;
}
return (*head);
}
