#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints all possible combinations of single-digit numbers'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		if (a != 57)
		{
		putchar(',');
		putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
