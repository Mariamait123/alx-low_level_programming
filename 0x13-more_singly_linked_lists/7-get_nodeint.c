#include "lists.h"
/**
  *get_nodeint_at_index - function that returns the nth node
  *@head: input list
  *@index: input node
  *Return: value at n node
  *if node dose not exist NULL will be returned
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int a = 0;
	listint_t *new = head;

	while (new && a < index)
	{
		new = new->next;
		a++;
	}
	return (new ? new : NULL);
}
