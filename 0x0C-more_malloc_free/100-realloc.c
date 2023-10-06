#include "main.h"
#include <stdlib.h>
/**
  *_realloc - reallocates a memory block
  *@ptr: void array
  *@old_size: integer input
  *@new_size: input intger
  *Return: new value of ptr
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt;
	char *oldpr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	pt = malloc(new_size);
	if (pt == NULL)
		return (NULL);
	oldpr = ptr;
	if (new_size < old_size)
		for (i = 0; i < new_size; i++)
			pt[i] = oldpr[i];
	if (new_size > old_size)
		for (i = 0; i < old_size; i++)
			pt[i] = oldpr[i];
	free(ptr);
	return (pt);
}
