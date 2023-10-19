#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
int sten(const char *s);
/**
  *add_node_end - function that adds a new node at the end of a list_t
  *@head: input list_t
  *@str: char to be add on head
  *Return: the address of the new element, or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = sten(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
/**
  *sten - counts number of char
  *@s: input string
  *Return: number of char
  */
int sten(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
