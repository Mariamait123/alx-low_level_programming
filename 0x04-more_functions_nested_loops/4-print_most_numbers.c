#include "main.h"
/**
  * print_most_numbers - prints numbers
  */
void print_most_numbers(void)
{
	int i;

	for (i = 1; i < 10, i++)
	{
			if (i != 2)
			{
				if (i != 4)
				_putchar(i + '0');
			}
	}
	_putchar('\n');
}
