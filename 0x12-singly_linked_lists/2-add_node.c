#include"lists.h"
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
#include<string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: 1st node
 * @str: srtring
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
