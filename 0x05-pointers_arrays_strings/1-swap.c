#include "main.h"
/**
  *swap_int - swaps int values
  *@a: num 1
  *@b: num 2
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
