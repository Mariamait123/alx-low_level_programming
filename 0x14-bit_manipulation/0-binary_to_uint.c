#include "main.h"
#include <stddef.h>
/**
  *binary_to_uint - converts a binary number to an unsigned int
  *@b: input binary number
  *Return: converted number
  *returns 0 if b is NULL or has char other than 0 or 1
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, a = 0;

	if (b == NULL)
		return (0);
	for (; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		a <<= 1;
		if (b[i] == '1')
			a += 1;
	}
	return (a);
}
