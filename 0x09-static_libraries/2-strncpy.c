#include "main.h"
/**
  *_strncpy - copy string
  *@dest: input array
  *@src: input array
  *@n: input integer
  *Return: new value of dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
