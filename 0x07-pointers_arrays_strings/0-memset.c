#include "main.h"
/**
  *_memset -  fills memory with a constant byte
  *@s: input array
  *@b: input char
  *@n: input int
  *Return: the new value of s
  */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
