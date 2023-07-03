#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to list
 * Return: number  of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;
	
	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
