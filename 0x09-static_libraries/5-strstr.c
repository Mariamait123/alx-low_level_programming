#include "main.h"
/**
  *_strstr - Entry point
  *@haystack: input array
  *@needle: input array
  *Return: Always 0
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			p++;
			l++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
