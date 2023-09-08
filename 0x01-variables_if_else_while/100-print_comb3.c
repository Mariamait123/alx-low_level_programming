#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'different combinations of two digits'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b = 49;

	while (a <= 57)
	{
		while (b <= 57)
		{
			putchar(a);
			putchar(b);
			if (a != 56)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		b = ++a;
		b++;
	}
	putchar('\n');
	return (0);
}
