#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
  *list_len -  returns the number of elements in a linked list_t
  *@h: input list_t
  *Return: number of elements
  */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
