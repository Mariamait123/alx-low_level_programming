#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
/**
  *array_iterator - executes a function given as a parameter on each element
  *@size: size of array
  *@action: input function
  *@array: input array
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	for (; i < size; i++)
		action(array[i]);
}
