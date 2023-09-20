#include "main.h"
/**
  *cap_string - capitalizes all words of a string
  *@c: input string
  *Return: new string
  */
char *cap_string(char *c)
{
	int a;

	for (a = 0; c[a] != '\0'; a++)
	{
		if (c[a] >= 'a' && c[a] <= 'z')
		{
			if (a == 0 ||
					c[a - 1] == ' ' ||
					c[a - 1] == '\n' ||
					c[a - 1] == '}' ||
					c[a - 1] == ',' ||
					c[a - 1] == '.' ||
					c[a - 1] == ';' ||
					c[a - 1] == '!' ||
					c[a - 1] == '?' ||
					c[a - 1] == '\"' ||
					c[a - 1] == '(' ||
					c[a - 1] == ')' ||
					c[a - 1] == '{' ||
					c[a - 1] == '\t')
				c[a] = c[a] - 32;
		}
	}
	return (c);
}
