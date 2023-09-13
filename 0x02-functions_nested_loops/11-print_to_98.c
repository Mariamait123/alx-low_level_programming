#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n < 10 && n >= 0)
			{
				_putchar(n + '0');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else if (n == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		while (n >= 98)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
}
