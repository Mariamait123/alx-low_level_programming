#include "main.h"
/**
  *get_bit - returns the value of a bit at a given index
  *@n: input number
  *@index: input index
  *Return: the value of the bit at index index or -1 for erorr
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int d, c;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	d = 1 << index;
	c = n & divisor;
	if (c == d)
		return (1);
	return (0);
}
