#include "main.h"
/**
  *_memset - fill memory with a value
  *@s: input array
  *@b: input char
  *@n: input integer
  *Return: changed array with new values
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
