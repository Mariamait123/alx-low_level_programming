#include "main.h"
/**
 * times_table - function that prints the 9 times table
 */
void times_table(void)
{
	int i, j, a;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			a = j * i;
			if (a == 0 && j == 0)
			{
				_putchar(a + '0');
			}
			else if (a < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(a + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(a / 10 + '0');
				_putchar(a % 10 + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
