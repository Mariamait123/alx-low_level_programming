#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character in c stdout
 * @c: character to print
 *Return: on success 1
 *on error, -1 is returned, errno is set appropriatly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
