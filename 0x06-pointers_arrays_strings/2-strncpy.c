#include "main.h"
/**
  *_strncpy - copies a string
  *@dest: string being edited
  *@src: string being copied
  *@n: determin how much src is copied
  *Return: new string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, i = 0;

	while (i < n)
	{
		if (src[i] == '\0')
		{
			dest[a] = '\0';
			break;
		}
		else
			dest[a] = src[a];
		a++;
	}
	return (dest);
}
