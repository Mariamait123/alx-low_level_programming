#include "main.h"
/**
  *_memcpy - a function that copies memory area
  *@dest: stroes copy
  *@src: array being copied
  *@n: number of bytes
  *Return: new value of dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0, s;

	s = n;
	for (; a < s; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
