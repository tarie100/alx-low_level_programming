#include"lists.h"
#include<string.h>
#include<stddef.h>
#include<stdlib.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: 1st node
 * @str: string
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *current;
	size_t a;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	for (a = 0; str[a]; a++)
		;
	newnode->len = a;
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
