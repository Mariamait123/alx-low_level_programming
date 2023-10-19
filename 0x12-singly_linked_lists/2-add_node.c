#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
int slen(const char *s);
/**
  *add_node -  adds a new node at the beginning of a list_t
  *@head: input list_t
  *@str: duplicated string
  *Return: address of the new element
  *returns NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);
	add->len = slen(str);
	add->next = *head;
	*head = add;
	return (add);
}
/**
  *slen - count number of charcter
  *@s: input string
  *Return: number of char
  */
int slen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
