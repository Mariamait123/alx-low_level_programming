#include "main.h"
/**
  *_memcpy - copies memory area
  *@dest: will hold copy of src
  *@src: will be coppied
  *@n: determine how much src is coppied
  *Return: value of dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
