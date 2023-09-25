#include "main.h"
/**
  *_strstr - locates a substring
  *@haystack: input string
  *@needle: string being located in haysack
  *Return: beginning of the located substring
  */
char *_strstr(char *haystack, char *needle)
{
	unsigned int a;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		char *l = haystack;

		while (*needle != '\0')
		{
			if (*needle != *l)
				break;
			l++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
	}
	return (0);
}
