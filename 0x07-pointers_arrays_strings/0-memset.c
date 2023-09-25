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
	unsigned int a = 0, t = 0;

	while (s[t] != '\0')
		t++;
	while (a < n)
	{
		if (a != t)
			s[a] = b;
		a++;
	}
	return (s);
}
