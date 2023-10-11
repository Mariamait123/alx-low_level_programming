#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
/**
  *int_index - searches for an integer
  *@array: input array
  *@size: array size
  *@cmp: input function
  *Return: index of the first element where cmp != 0
  *returns -1 for no mach ot soze <= 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
