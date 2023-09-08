#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'combinations of three digits'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b = 49;
	int c = 50;

	while (a <= 57)
	{
		while (b <= 57)
		{
			while (c <= 57)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != 55)
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			c = ++b;
			c++;
		}
		b = ++a;
		c = ++b;
		c++;
	}
	putchar('\n');
	return (0);
}
