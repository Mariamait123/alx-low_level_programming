#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int i = 1;

	while (i < 11)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		a = 'a';
		i++;
	}
}
