#include "main.h"
/**
  *_puts_recursion - prints a string
  *@s: input string
  */
void _puts_recursion(char *s)
{
	int a = 0;

	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[a]);
	a++;
	_puts_recursion(&s[a]);
}
