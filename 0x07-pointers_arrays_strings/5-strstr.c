#include "main.h"
/**
  *_strstr - locates a substring
  *@haystack: input string
  *@needle: string being located in haysack
  *Return: beginning of the located substring
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*p != '\0')
		{
			if (*p != *l)
				break;
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
