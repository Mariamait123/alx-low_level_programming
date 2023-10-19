#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
  *print_list - prints input array
  *@h: input list
  *Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (5);
}
