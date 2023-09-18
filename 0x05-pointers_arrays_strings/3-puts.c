#include "main.h"
/**
  *3-puts.c - prints a string
  *@str: input string
  */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
