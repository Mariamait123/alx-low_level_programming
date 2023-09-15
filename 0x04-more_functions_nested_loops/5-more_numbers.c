#include "main.h"
/**
  *more_numbers - prints 10 times the numbers
  */
void more_numbers(void)
{
	int i, x;

	for (x = 0; x < 10; x++)
	{
		i = 0;
		while (i < 15)
		{
			if (i < 10)
				_putchar(i + '0');
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			i++;
		}
		_putchar('\n');
	}
}
