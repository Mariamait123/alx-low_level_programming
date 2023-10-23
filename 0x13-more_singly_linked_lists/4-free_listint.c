#include "lists.h"
/**
  *free_listint - frees lists
  *@head: input list
  */
void free_listint(listint_t *head)
{
	while (h)
	{
		free_listint(h->next);
		free(head->n);
		free(head);
	}
}
