#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Write a program that prints the alphabet in lowercase.'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
